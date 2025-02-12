#include <stdio.h>
#include <stdlib.h>
#include <stdatomic.h>
#include <time.h>

#define NUM_THREADS 5
#define SEMAPHORE_LIMIT 2  // Limite de acesso simultâneo

volatile atomic_int lock = 0;  // Mutex manual (0 = livre, 1 = ocupado)
volatile atomic_int semaphore = SEMAPHORE_LIMIT;  // Semáforo manual

void custom_sleep(int seconds){

    clock_t start_time = clock();
    while ((clock() - start_time) < seconds * CLOCKS_PER_SEC);
}

// Bloquear um mutex manual
void acquire_lock(){
    while (atomic_exchange(&lock, 1)) {}  // Aguarda até que lock seja 0
}

// Liberar um mutex manual
void release_lock(){
    atomic_store(&lock, 0);  // Define lock como livre
}

// Simula semáforo manual
void acquire_semaphore(){
    while (1){
        int current = atomic_load(&semaphore);
            if (current > 0 && atomic_compare_exchange_weak(&semaphore, &current, current - 1)){
                break;
        }
    }
}

// Libera o semáforo manual
void release_semaphore(){
    atomic_fetch_add(&semaphore, 1);
}

// Função da thread
void threadFunction(int id){
// Seção crítica com Mutex
    acquire_lock();
        printf("Thread %d entrou na secao critica.\n", id);
    custom_sleep(1);
        printf("Thread %d saiu da secao critica.\n", id);
    release_lock();

// Controle de acesso com Semáforo manual
    acquire_semaphore();
        printf("Thread %d acessando recurso com semaforo.\n", id);
    custom_sleep(2);
        printf("Thread %d liberando recurso do semaforo.\n", id);
    release_semaphore();
}

int main(){

// Simula múltiplas threads com chamadas sequenciais
    for (int i = 0; i < NUM_THREADS; i++){
        threadFunction(i + 1);
    }
    return 0;
}