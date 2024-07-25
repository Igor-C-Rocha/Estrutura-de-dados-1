#include <stdio.h>

void preenche_e_imprime(int N){
    char sex[N];
    int opi[N], f = 1;

    for(int i = 0; i < N; i++){
        printf("Sujeito %d\n", f++ );
        printf("Informe seu sexo [M/F]: \n");
            scanf(" %c", &sex[i]);
        printf("Informe sua opiniao 1-GOSTEI 2-NAO GOSTEI: \n");
            scanf("%d", &opi[i]);
    } 
/*total feminino/ gostaram feminino, total masculino/ nao gostaram masculino*/
    int TF = 0, GF = 0;
    int TM = 0, NGM = 0;

    for(int i = 0; i < N; i++){
        if(sex[i] ==  'F'){
            TF++;
            if(opi[i] == 1){
                GF++;
        }
    } else if (sex[i] == 'M'){
        TM++;
        if(opi[i] == 2){
            NGM++;
        }
    }
    }
    float porcentagemGF = (TF > 0) ? (GF * 100.0 / TF) : 0;
    float porcentagemNGM = (TM > 0) ? (NGM * 100.0 / TM) : 0;

    printf("Porcentagem de mulheres que gostaram: %.2f%%\n", porcentagemGF);
    printf("Porcentagem de homens que nao gostaram: %.2f%%\n", porcentagemNGM);
    
}
int main(){

    int N;

    printf("Quantas pessoas foram entrevistadas? \n");
        scanf("%d", &N);
preenche_e_imprime(N);

    return 0;
}