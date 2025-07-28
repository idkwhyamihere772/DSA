#include <iostream>
#include <string>

using namespace std;

struct Node{
    int data;
    struct Node * next;
};
void trav(Node * head){
    while(head != NULL){
        cout<<head->data<<" ";
        head= head->next;
        
    }
}

Node * delete_first(Node * head){
    Node * ptr = head;
    head = head->next;
    delete ptr;
    ptr = NULL;
    return head;
}

Node * delete_last(Node * head){
    Node * ptr = head;
    Node * temp = head->next;
    while(temp->next != NULL){
        ptr = ptr ->next;
        temp = temp->next;
    }
    ptr->next = NULL;
    delete temp;
    return head;
}

Node * delete_index(Node * head,int index){
    Node * ptr = head;
    Node * temp = head->next;
    int i = 0;
    while(i < index-1){
        ptr = ptr -> next;
        temp = temp-> next;
        i++;
    }
    ptr->next = temp->next;
    delete temp;
    temp = NULL;
    return head;
    
}
int main() {
    Node * head = new Node;
    Node * second = new Node;
    Node * third = new Node;
    Node * fourth = new Node;

    head -> data = 3;
    head -> next = second;

    second -> data = 7;
    second -> next = third;

    third -> data = 13;
    third -> next = fourth;

    fourth -> data = 17;
    fourth -> next = NULL;
    
    trav(head);
    cout<<endl;
    // head = delete_at_start(head);
    // cout<<endl;
    // trav(head);
    // cout<<endl;
    head = delete_index(head,1);
    trav(head);


    
    

}