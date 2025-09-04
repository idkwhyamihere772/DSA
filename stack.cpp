// stack using an array 
#include <iostream>

using namespace std;

struct Stack{
    int * arr;
    int top;
    int size;

};

int isempty(Stack * ptr){
    if(ptr->top == -1){
        return true;
    }
    else{
        return 0;
    }
}

int isfull(Stack * ptr){
    if(ptr->top == ptr->size-1){
        return true;
    }
    else{
        return 0;
    }
}
int not_empty(Stack * ptr){
    if(ptr->top >= 0){
        return true;
    }
    else{
        return 0;
    }
}
int main(){
    Stack *  S = new Stack;
    S->size = 5;
    S->top = -1;
    S->arr = new int [S->size];

    // isempty(S);

    if(isempty(S)){
        cout<<"stack is empty ...";
    }
    if(isfull(S)){
        cout<<"Stack is full ...";
    }
    if(not_empty(S)){
        cout<<"stack is not empty ...";
    }

    
}