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
int main() {
    Node * top = NULL;
    top = push(top,7);
    trav(top);
}