#include <iostream>
#include <string>

using namespace std;

struct Node{
string data;
    Node * next;
};

void trav(Node * head){
    Node * ptr = head;
    do
    {
        cout<<ptr->data<<"->";
        ptr = ptr->next;
    } while (ptr != head);
    
}

Node * at_first(Node * head , string data){
    Node * ptr = new Node;
    Node * temp = head;
    ptr->data = data;
    do
    {
        temp = temp->next;
    } while (temp->next != head);
    temp->next = ptr;
    ptr->next = head;
    return ptr;

}
Node * at_last(Node * head, string data){
    Node * ptr = new Node;
    Node * temp = head;
    ptr->data = data;
    do
    {
        temp = temp->next;
    } while (temp->next != head);
    ptr->next = head;
    temp->next = ptr;
    return head;
}

Node * at_index(Node * head, string data, int index){
    Node * ptr = new Node;
    Node * temp = head;
    ptr->data = data;
    int i = 0;
    while(i != index-1){
        temp=temp->next;
        i++;
    }
    ptr->next = temp->next;
    temp->next = ptr;
    return head;
}
int main() {
    Node * head = new Node;
    Node * second = new Node;
    Node * third = new Node;
    Node * fourth = new Node;

    head -> data = "First Node";
    head -> next = second;

    second->data = "Second Node";
    second->next = third;

    third->data = "Third Node";
    third->next = fourth;

    fourth -> data = "Fourth Node";
    fourth-> next = head;
    trav(head);
    cout<<endl;
    head = at_first(head,"New Node");
    trav(head);
    head = at_last(head,"New Node");
    cout<<endl;
    trav(head);
    cout<<endl;
    head = at_index(head,"New Node",2);
    trav(head);

    return 0;
}