#include <iostream>
#include <string>

using namespace std;

struct Node{
    int data;
    struct Node * next;
    Node * next;
    Node(int val) : data(val), next(nullptr) {} // Constructor for easier node creation
};
void trav(Node * head){
    while(head != NULL){
        cout<<head->data<<" ";
        head= head->next;
        
    }
}

Node * delete_first(Node * head){
    if (head == nullptr) {
        cout << "List is already empty." << endl;
        return nullptr;
    }
    Node * ptr = head;
    head = head->next;
    delete ptr;
    ptr = NULL;
    return head;
}

Node * delete_last(Node * head){
    if (head == nullptr) {
        cout << "List is already empty." << endl;
        return nullptr;
    }
    // If there is only one node in the list
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node * ptr = head;
    Node * temp = head->next;
    while(temp->next != NULL){
        ptr = ptr ->next;
        temp = temp->next;
    }
    ptr->next = NULL;
    ptr->next = nullptr;
    delete temp;
    return head;
}

Node * delete_index(Node * head,int index){
    if (head == nullptr) {
        cout << "List is empty, cannot delete." << endl;
        return nullptr;
    }

    if (index == 0) {
        return delete_first(head);
    }

    Node * ptr = head;
    Node * temp = head->next;
    int i = 0;
    while(i < index-1){
    // Traverse to the node just before the one to be deleted
    while(i < index - 1 && ptr->next != nullptr){
        ptr = ptr -> next;
        temp = temp-> next;
        i++;
    }

    // If index is out of bounds or list is shorter than index
    if (ptr->next == nullptr) {
        cout << "Index out of bounds." << endl;
        return head;
    }

    Node* temp = ptr->next;
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
    // Using constructor for cleaner initialization
    Node * head = new Node(3);
    Node * second = new Node(7);
    Node * third = new Node(13);
    Node * fourth = new Node(17);

    head -> data = 3;
    head -> next = second;

    second -> data = 7;
    second -> next = third;

    third -> data = 13;
    third -> next = fourth;

    fourth -> data = 17;
    fourth -> next = NULL;
    
    cout << "Original list: ";
    trav(head);
    cout<<endl;
    // head = delete_at_start(head);
    // cout<<endl;
    // trav(head);
    // cout<<endl;

    cout << "List after deleting index 1: ";
    head = delete_index(head,1);
    trav(head);
    cout << endl;

    cout << "List after deleting first element: ";
    head = delete_first(head);
    trav(head);
    cout << endl;

    
    

    // Clean up remaining nodes to prevent memory leaks
    while(head != nullptr) {
        head = delete_first(head);
    }
}