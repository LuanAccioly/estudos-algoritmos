#ifndef FUNCOES_H
#define FUNCOES_H
#include <stdlib.h>
#include <stdio.h>

/*=======================================================================*/

void inserctionSort(int tamanho, int *v);
void heapsort(int tamanho, int *a);
void quicksort(int tamanho, int *v);
void printarVetor(int tamanho ,int *vetor);
void gerarAleatoriosVetor(int tamanho, int *vetor, int limite);


/*=======================================================================*/


void quicksort(int tamanho, int *v){
    if(tamanho <= 1)
        return;
    else{
        int x = v[0];
        int a  = 1;
        int b = tamanho -1;

        do{
            while (a < tamanho && v[a] <= x)
                a++;
            while(v[b] > x)
                b--;
            if(a < b){
                int aux = v[a];
                v[a] = v[b];
                v[b] = aux;
                a++;
                b--;
            }        
        }while (a<=b);

        v[0] = v[b];
        v[b] = x;

        quicksort(b, v);
        quicksort(tamanho - a, &v[a]);
    }    
}

void inserctionSort(int tamanho, int *v){
    int x, j;

    for(int i = 1; i < tamanho; i++){
        x = v[i];
        j = i - 1;
        while((j >= 0) && v[j] > x){
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = x;
    }
}

void heapsort(int tamanho ,int *a) {
   int i = tamanho / 2, pai, filho, t;
   while(i >= 0) {
      if (i > 0) {
          i--;
          t = a[i];
      } else {
          tamanho--;
          if (tamanho <= 0) return;
          t = a[tamanho];
          a[tamanho] = a[0];
      }
      pai = i;
      filho = i * 2 + 1;
      while (filho < tamanho) {
          if ((filho + 1 < tamanho)  &&  (a[filho + 1] > a[filho]))
              filho++;
          if (a[filho] > t) {
             a[pai] = a[filho];
             pai = filho;
             filho = pai * 2 + 1;
          } else {
             break;
          }
      }
      a[pai] = t;
   }
}



void printarVetor(int tamanho ,int *vetor){
    for(int i = 0; i < tamanho; i++){
        printf("%i ", vetor[i]);
    }
}

void gerarAleatoriosVetor(int tamanho, int *vetor, int limite){
    for(int i = 0; i < tamanho; i++){
        vetor[i] = rand() % limite;
    }
}

#endif