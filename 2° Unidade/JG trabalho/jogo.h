// nomeando a struc 
typedef struct jogo Jogo;

// nomeando a struc
typedef struct no No;

// nomeando a struc
typedef struct sessao Sessao;

// função responsavel pela crianção do arquivo.txt
void criarArquivoTexto(const char * jogos);

// função que ira adicionar os jogos
No * adicionar(No * lista , char nome[], char tipo[], float preco, char genero[]);

// função responsavel pela retirada de jogos
No * tira(No * lista, char * nome);

// função que ira buscar o jogo desejado 
No * busca(No * lista, char * nome);

No * busca2(No * lista , char * nome);

// função responsavel pela edição dos jogos 
void editar(No * lista);

void salvar(No * lista);

// função responsavel por limpar a lista
void liberar_jogos(No * lista);

// função que ira criar as sessões
struct sessao * criar_sessao(const char * descricao, const char * nome);

// função que ira adicionar uma sessão
struct sessao * adicionar_sessao(struct sessao * lista, const char * descricao, const char * nome);

// responsavel pela retirada das sessões
struct sessao * excluir_sessao(struct sessao * lista, const char * nome);

// lista as sessões existentes
void listar_sessoes(struct sessao * lista);

// limpeza da sessão 
void liberar_sessoes(struct sessao * lista);