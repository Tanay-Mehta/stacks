#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}
node;

node *head = NULL;
void push(int value){
    node *temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->link = head;
    head = temp;
}
void pop(){
    node *head_ref = head;
    while(head_ref->link->link != NULL){
        head_ref = head_ref->link;
    }
    free(head_ref->link->link);
    head_ref->link = NULL;
}
void print(){
    node *head_ref = head;
    while(head_ref != NULL){
        printf("%i", head_ref->data);
        head_ref = head_ref->link;
    }
    printf("\n");
}
void main(void){
    push(5);
    push(4);
    push(2);
    print();
    pop();
    print();
}