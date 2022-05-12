// nome: usaFila.c 
// Autor: Matheus Gomes Santos - RGM:26136805
// Turma: 3/N1  
        
#include <stdio.h>
#include "Fila.h"
#include "Pilha.h"

void fila_inverte(Fila* f);

int main (void) 
{
  Fila *f;
  float n;           
  char op;
  
  f = fila_cria ();

  fila_insere (f, 20.1);
  fila_insere (f, 33.3);
  fila_insere (f, 21.7);
  fila_insere (f, 14.5);
  
  printf("\n Fila Original \n");
  
  while (!fila_vazia(f)){
    printf ("%f \n", fila_retira(f)); 
  }
  
  fila_insere (f, 20.1);
  fila_insere (f, 33.3);
  fila_insere (f, 21.7);
  fila_insere (f, 14.5);
  
  fila_inverte(f);	
  
  printf("\n Fila Invertida \n");

  while (!fila_vazia(f)){
    printf ("%f \n", fila_retira(f)); 
  }
  
  fila_libera(f);
 
  
  return 0;
}



void fila_inverte(Fila* f){
	
	Pilha  *p;  	
	float v;
	
	p = pilha_cria();
	
	while(!fila_vazia(f)){
		
		v = fila_retira(f);

		pilha_push(p, v);
	}
	
	while(!pilha_vazia(p)){
		
		v = pilha_pop(p);
		
		fila_insere(f, v);	
	}
	
	pilha_libera(p);


}

