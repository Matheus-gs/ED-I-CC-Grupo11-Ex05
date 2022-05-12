// nome: usaPilha.c     
    
#include "../Pilha/Pilha.h"

#include <stdio.h>

int main (void) {
  Pilha* p;           /* declara variável para acessar pilha */
  
  p = pilha_cria();   /* inicia pilha vazia */
  pilha_push(p, 4.5); /* insere na pilha o elemento 4.5*/
  pilha_push(p, 3.0); /* insere na pilha o elemento 3.0 */
  pilha_push(p, 5.0); /* insere na pilha o elemento 5.0 */
  pilha_push(p, 3.5); /* insere na pilha o elemento 3.5 */
  
  printf ("%f \n", pilha_pop(p)); /* retira da pilha elemento 3.5 */
  printf ("%f \n", pilha_pop(p));  /* retira da pilha o elemento 5.0*/
  
  pilha_push(p, 4.5); /* insere na pilha o elemento 4.5 */
  
  pilha_libera(p);
  
  return 0;
}
