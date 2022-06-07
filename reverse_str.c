#include <stdio.h>
#include <stdlib.h>
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int n = sizeof(arr)/sizeof(arr[0]);
int top = -1;
int stack[10];

int push(int value){
    top++;
    stack[top] = value;
}
void pop(){
    stack[top] = 0;
    top--;
}
void reverse(){
    int i = 0;
    while(i<n){
        arr[i] = stack[top];
        top--;
        i++;
    } 
}

void pushall(){
    int i = 0;
    while(i<n){
        push(arr[i]);
        i++;
    }
}
void main(){
    pushall();
    reverse();
}