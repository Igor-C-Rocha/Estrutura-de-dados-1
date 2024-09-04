typedef struct no No;

void inserir_inicio(No ** lista ,int valor);

void inserir_final(No ** lista, int valor);

void exibir_lista(No * lista);

void remover_primeiro(No ** lista);

int buscar(No * lista, int valor);

void remover_valor(No ** lista, int valor);

void inserir_apos(No ** lista, int valor, int novo_valor);