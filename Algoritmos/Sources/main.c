#include <stdio.h>
#include <stdlib.h>
#include "sorts.h"
#include "filas.h"

int main(void){
    system("cls");
    
    /*============Declarando vetores pra teste=================*/

    int v[] = {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0};
    int vetorProva[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    struct fila f1;
    criarFila(&f1, 10);

    /*=========================================================*/


    /*======Calcular tamanho do vetor (saudades .length)=======*/
    int tamVetor = (sizeof(vetorProva)/sizeof(int));
    /*=========================================================*/

/*
    printarVetor(tamVetor, vetorProva);
    heapsort(tamVetor, vetorProva);
    printf("\n\n");
    printarVetor(tamVetor, vetorProva);
*/
    inserir(&f1, 1);
    inserir(&f1, 2);
    inserir(&f1, 3);
    inserir(&f1, 4);
    inserir(&f1, 5);
    inserir(&f1, 6);
    mostrarFila(&f1);
    remover(&f1);
    mostrarFila(&f1);
    return 0;
}





