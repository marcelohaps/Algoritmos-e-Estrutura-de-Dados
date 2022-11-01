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

Queue *create_queue();
void insere_final(Queue *q, int dado);
void printa_fila(Queue *q);
void remove_inicio(Queue *q);

int main(){

    Queue *f = create_queue();
    insere_final(f, 5);
    insere_final(f, 2);
    insere_final(f, 3);
    
    printa_fila(f);



    return 0;
}

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
        while (1){
            if (aux->prox == NULL)
                break;
            aux = aux->prox;
            
        }
        aux->prox = new;
        new->prox = NULL;
        new->data = dado;
        q->size++;
    }
}

void remove_inicio(Queue *q){
    No *aux = q->head;
    if (aux == NULL){
        printf("Fila esta vazia");
    }
    else{
        q->head = aux->prox;
        free(aux);
    }
}

void printa_fila(Queue *q){
    No *aux = q->head;
    while(aux != NULL){
        printf("%d ", aux->data);
        aux = aux->prox;
    }

}