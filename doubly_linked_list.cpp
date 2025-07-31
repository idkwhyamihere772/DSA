#include <iostream>
#include <string>

using namespace std;
struct Node
{
    string data;
    Node * prev;
    Node * next;
};

void trav(Node * head){
    Node * ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<"->";
        ptr = ptr -> next;
    }
}

void back_trav(Node * tail){
    Node * ptr = tail;
    while (ptr != NULL)
    {
        cout<<ptr->data<<"->";
        ptr = ptr->prev;

    }
    
}
int main() {
    Node * head = new Node; 
    Node * second = new Node; 
    Node * third = new Node; 
    Node * fourth = new Node; 
    Node * tail = fourth;

    head -> data = "first Node";
    head->prev = NULL;
    head->next = second;

    second -> data = "Second Node";
    second -> prev = head;
    second -> next = third;

    third -> data = "Third Node";
    third -> prev = second;
    third -> next = fourth;

    fourth -> data = "Fourth Node";
    fourth -> prev = third;
    fourth -> next = NULL;
    trav(head);
    cout<<endl;
    back_trav(tail);
    return 0;
}