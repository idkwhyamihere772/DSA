#include <iostream>
#include <string>
using namespace std;
struct Node
{
    string data;
    Node *next;
};

void trav(Node * head){
    Node * ptr = head;
    do{
        cout<<ptr->data<<"->";
        ptr = ptr->next;
    }
    while (ptr != head);
}
int main()
{
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;
    Node *fifth = new Node;

    head->data = "First Node";
    head->next = second;

    second->data = "second Node";
    second->next = third;

    third -> data = "third Node";
    third->next = fourth;

    fourth ->data = "fourth Node";
    fourth->next = fifth;

    fifth -> data = "fifth Node";
    fifth->next = head;

    trav(head);
    cout<<endl;

    return 0;
}