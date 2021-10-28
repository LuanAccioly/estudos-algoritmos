#include <stdio.h>
#include <stdlib.h>
#include "sorts.h"
#include "filas.h"
#include "pilhas.h"

int main(void){
    system("cls");
    

    //int v[] = {0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0 ,0};
    //int vetorProva[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    /*======Calcular tamanho do vetor (saudades .length)=======*/
    //int tamVetor = (sizeof(vetorProva)/sizeof(int));
    /*=========================================================*/

    struct Pilha p1;
    criarPilha(&p1, 5);
    inserirItemPilha(&p1, 1);
    inserirItemPilha(&p1, 2);
    inserirItemPilha(&p1, 3);
    inserirItemPilha(&p1, 4);
    inserirItemPilha(&p1, 5);
    mostrarPilha(&p1);
    printf("\nitem  %f removido", removerItemPilha(&p1));
    printf("\nitem  %f removido", removerItemPilha(&p1));
    printf("\nitem  %f eh o topo", exibirTopo(&p1));
    printf("\n\n");




    return 0;
}





