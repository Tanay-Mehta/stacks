
// This implementation of stacks is done with arrays in C

#include <stdio.h>
#include <stdlib.h>

int arr[2]; //Defining the length of the array
int top = -1; //defining top

int push(int x){   //push function
    if (top>0){ 
        printf("no space in the array\n"); 
        return 1; // detecting if overflowing the array
    } 
    else{
        top++;
        arr[top] = x; //adding element to arry
    } 
}
void pop(){
    arr[top] = 0; //removing an element
    top--; // the top is the previous top
}
void main(){ 
    push(2);
    push(3); //last element in array
    push(1); // overflowing array
    pop();
    pop(); // making space for another element
    push(4); // adding element 
}



