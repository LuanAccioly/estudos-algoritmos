#ifndef FILAS_H
#define FILAS_H
#include <stdlib.h>
#include <stdio.h>

struct fila
{
    int capacidade;
    float *dados;
    int primeiroItem;
    int ultimoItem;
    int numItens;
};

void criarFila(struct fila *f, int tamanho){
    f->capacidade = tamanho;
    f->dados = (float*) malloc (f->capacidade * sizeof(float));
    f->numItens = 0;
    f->primeiroItem = 0;
    f->ultimoItem = -1;
}

void inserir(struct fila *f, int v){
    if(f->ultimoItem == f->capacidade - 1){
        f->ultimoItem = -1;
    }

    f->ultimoItem++;
    f->dados[f->ultimoItem] = v;
    f->numItens++;
}

int remover(struct fila *f){
    int removido = f->dados[f->primeiroItem++];
    if(f->primeiroItem == f->capacidade){
        f->primeiroItem = 0;
    }

    f->numItens--;

    return removido;
}

void mostrarFila(struct fila *f){

	int cont, i;

	for ( cont=0, i= f->primeiroItem; cont < f->numItens; cont++){

		printf("%1.f ",f->dados[i]);
        i++;
		if (i == f->capacidade)
			i=0;

	}
	printf("\n\n");

}



#endif