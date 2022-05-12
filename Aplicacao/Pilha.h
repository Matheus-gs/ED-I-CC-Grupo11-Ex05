/* TAD pilha de reais */
/* Nome: Pilha.h */
 
typedef struct pilha Pilha;
 
Pilha* pilha_cria (void);
void   pilha_libera (Pilha* p);

void   pilha_push (Pilha* p, float v);
float  pilha_pop  (Pilha* p);

int    pilha_vazia (Pilha* p);
