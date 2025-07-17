#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node* next;
};

void trav(Node* ptr) {
    while (ptr != NULL) {
        cout << ptr->data;
        ptr = ptr->next;
    }
}
Node * merge(Node * head,Node * head1){
    Node * head2 = head;
    Node * temp = head;
    
    while(temp->next  != NULL){
        temp = temp->next;
    }
   temp->next = head1;
   return head2;
}
Node* Atfirst(Node* head, string data) {
    Node* ptr = new Node;
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

Node* Atindex(Node* head, int index, string data) {
    Node* ptr = new Node;
    Node* temp = head;
    int i = 0;
    while (i != index - 1) {
        temp = temp->next;
        i++;
    }
    ptr->data = data;
    ptr->next = temp->next;
    temp->next = ptr;
    return head;
}

Node* Atlast(Node* head, string data) {
    Node* ptr = new Node;
    ptr->data = data;
    Node* p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main() {
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;

    head->data = "First Node -> ";
    head->next = second;

    second->data = "Second Node -> ";
    second->next = third;

    third->data = "Third Node -> ";
    third->next = fourth;

    fourth->data = "Fourth Node -> ";
    fourth->next = NULL;

	Node* head1 = new Node;
	Node* second1 = new Node;
	Node* third1 = new Node;

	head1 -> data = "additonal Node 1 ->";
	head1 -> next = second1;

	second1 -> data = "additonal Node 2 ->";
	second1 -> next = third1;

	third1 -> data = "additonal Node 3 ";
	third1 -> next = NULL;


    head = Atindex(head, 3, "neww node -> ");
    head = Atfirst(head, "new node -> ");
    head = Atlast(head, "new node -> ");
    trav(head);
    cout<<endl;
    trav(merge(head,head1));
    cout << endl;

    return 0;
}