#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    struct no *prox;
    int data;
}No;

typedef struct queue{
    No *head;
    int size;
}Queue;


Queue *create_queue(){
    Queue *q = (Queue*)malloc(sizeof(Queue));
    if (q != NULL){
        q->head = NULL;
        q->size = 0;
    }
    else{
        printf("A memoria nao foi alocada com sucesso");
    }
}
void insere_final(Queue *q, int dado){
    No *new = (No*)malloc(sizeof(No));
    No *aux = q->head;
    if (new == NULL){
        printf("No nao foi alocado com sucesso");
        return;
    }
    if (q->head == NULL){
        q->head = new;
        new->data = dado;
        new->prox = NULL;
        q->size++;
    }
    else{
        while (aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = new;
        new->prox = NULL;
        new->data = dado;
        q->size++;
    }

}
int main(){





    return 0;
}