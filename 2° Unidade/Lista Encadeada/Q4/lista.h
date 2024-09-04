typedef struct no No;

No * no(int valor);

void inserir_no_inicio(No ** lista, int valor);

void inserir_no_final(No ** lista, int valor);

void exibir(No * lista);

int buscar(No * lista, int valor);

void remover_valor(No ** lista, int valor);

void remover_primeiro(No ** lista);

void remover_ultimo(No ** lista);