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
        q->tam = 0;
    }
    else{
        printf("A memoria nao foi alocada com sucesso");
    }
}
int main(){





    return 0;
}