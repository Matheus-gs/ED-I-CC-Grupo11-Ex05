// nome: Pilha.c    

#include <stdio.h>
#include <stdlib.h>
   
#include "Pilha.h"

#define N 50     /* número máximo de elementos */
 
struct pilha {
  float vet [N]; /* vet[n-1]: topo da pilha */
                 /* vet[0] a vet[N-1]: posições ocupáveis */
  int   n;       /* vet[0]: primeira posição livre do vetor */
};

Pilha* pilha_cria (void)
{
   Pilha* p = (Pilha*) malloc (sizeof(Pilha));
           if (p == NULL)
        exit(1);

   p->n = 0;   /* inicializa com zero elementos */
   
   return p;
}

void pilha_libera (Pilha* p)
{ 
   free (p);
}

void pilha_push (Pilha* p, float v) 
{
   int topo;

   if (p->n == N){  /* capacidade esgotada */
      printf("Capacidade da pilha estourou.\n");
      return;     /* retorna para o programa */
   }

   /* insere elemento na próxima posição livre */
      topo = p->n;
      p->vet[topo] = v;
      
      p->n++;     /* equivalente a: p->n = p->n + 1 */
}

int pilha_vazia (Pilha* p) { 
   if(p->n == 0) 
        return 1;
   else 
        return 0;
}


float pilha_pop (Pilha* p) {
   int   topo; 
   float v;

   if (pilha_vazia(p)) 
   { 
      printf("Pilha vazia.\n");
      return -9999;  /* retorna para o programa */
   }
   
   /* retira elemento do topo */
      topo = p->n - 1;
      v = p->vet[topo];
      p->n--;

      return v;
}



