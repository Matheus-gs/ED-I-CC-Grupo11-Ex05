// nome: Fila.c  

#include <stdlib.h>
#include <stdio.h>
 
#include "Fila.h" 

#define N 100    /* número máximo de elementos */
 
struct fila {
 float vet [N];  
 int   n;    
 int   ini; 
};

Fila* fila_cria (void)
{
  Fila* f = (Fila*) malloc (sizeof(Fila));
             if (f == NULL)
        exit(1);
  f->n = 0;   /* inicializa fila como vazia */
  f->ini = 0; /* inicializa uma posição inicial */
  return f;
}

void fila_libera (Fila* f)  
{ 
   free (f);
}

void fila_insere (Fila* f, float v) 
{
  int fim;
  if (f->n == N) { /* fila cheia: capacidade esgotada */
       printf("Capacidade da fila estourou.\n");
       return;     /* retorna para o chamador*/
  }
  /* insere elemento na próxima posição livre */
     fim = (f->ini + f->n) % N;
     f->vet[fim] = v;
     f->n++;
}

float fila_retira (Fila* f) {
  float v;  
  int   ini;

  if (fila_vazia(f)) {
     printf("Fila vazia.\n");
     return;
  }
  /* retira elemento do início */
    ini = f->ini;
    v = f->vet[ini];
    ini = (ini + 1) % N;   
    f->ini = ini;
    f->n--;

    return v;
}

int fila_vazia (Fila* f) { 
   if(f->n == 0) 
      return 1;
   else  
      return 0;
}

