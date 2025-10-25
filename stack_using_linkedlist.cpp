#include <iostream>
#include <string>

using namespace std;
struct Node
{
    int data;
    Node * next;
    
};
int isempty(Node * top){
    if(top == NULL){
        return true;
    }
    return false;
}

int isfull(Node * top){
    Node * new_node = new Node;
    if(new_node == NULL){
        return true;
    }
    return false;
}

Node * push(Node * top , int data){
    if(isfull(top)){
        cout<<"Stack Overflowed !"<<endl;
    }
    else{
        Node * new_node = new Node;
        new_node->data = data;
        new_node->next = top;
        top = new_node;
    }
    return top;

}
void trav(Node * top){
    while(top != NULL){
        cout<<top->data<<endl;
        top = top->next;
    }
}
Node * pop(Node * top){
    if(isempty(top)){
        cout<<"stack underflowed!"<<endl;
    }
    else{
        int removed_element = top->data;
        Node * temp = top;
        
        top = top->next;
        delete temp;
        cout<<"item removed is : "<<removed_element<<endl;
    }
    return top;
}
void check_status(Node * top){
    if(isfull(top)){
        cout<<"Stack is full"<<endl;
    }
    else if(isempty(top)){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
}
int main() {
    Node * top = NULL;
    top = push(top,7);
    trav(top);
    top = pop(top);
    trav(top);
    check_status(top);
}