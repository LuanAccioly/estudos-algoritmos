#ifndef PILHAS_H
#define PILHAS_H
#include <stdlib.h>
#include <stdio.h>

struct Pilha
{
    int topo;
    int capacidade;
    float *dados;
};

void criarPilha( struct Pilha *p, int tamanho){
    p->topo = -1;
    p->capacidade = tamanho;
    p->dados = (float*) malloc (tamanho * sizeof(float));
}

void inserirItemPilha(struct Pilha *p, float item){
    p->topo++;
    p->dados[p->topo] = item;
}

float removerItemPilha(struct Pilha *p){
    float removido = p->dados[p->topo];
    p->topo--;
    return removido;
}

float exibirTopo(struct Pilha *p){
    return p->dados[p->topo];
}

void mostrarPilha(struct Pilha *p){
    int tamanho = p->capacidade;

    for(int i = 0; i < tamanho; i++){
        printf("%1.f ", p->dados[i]);
    }
}


#endif