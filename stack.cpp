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
int not_empty(Stack* ptr) {
    if (ptr->top >= 0) {
        return 1; // 1 means true, the stack is not empty.
    } else {
        return 0; // 0 means false, the stack is empty.
    }
}

int push(Stack * s , int data){
    if(isfull(s)){
        cout<<"Stack Overflowed !"<<endl;
        return 0;
    }
    s->top++;
    s->arr[s->top] = data;
    return 1;

}

int pop(Stack * s){
    if(isempty(s)){
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    int val = s->arr[s->top];
    s->top--;
    return val;
}
void check_status(Stack * s){
    if(isempty(s)){
        cout<<"stack is empty ..."<<endl;
    }
    else if(isfull(s)){
        cout<<"Stack is full ..."<<endl;
    }
    else if(not_empty(s)){
        cout<<"stack is not empty ..."<<endl;
    }

}
int main(){
    Stack *  S = new Stack;
    S->size = 5;
    S->top = -1;
    S->arr = new int [S->size];
    push(S,2);
    check_status(S);
    pop(S);
    check_status(S);

}