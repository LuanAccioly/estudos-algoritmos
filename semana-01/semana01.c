#include <stdio.h>
#include <stdlib.h>

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

int main(void){
    system("cls");

    int v[] = {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0};
    int tamVetor = (sizeof(v)/sizeof(int));

    gerarAleatoriosVetor(tamVetor, v, 100);

    printarVetor(tamVetor, v);
    
    inserctionSort(tamVetor, v);
    
    printf("\n\n");
    
    printarVetor(tamVetor, v);
    
    return 0;
}

