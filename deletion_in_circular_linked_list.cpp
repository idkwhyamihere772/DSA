#include <iostream>
#include <string>

using namespace std;

struct Node{
    int data;
    Node * next;
};

void trav(Node * head){
	Node * temp = head;
    do{
    	cout<<temp->data<<" ";
		temp = temp->next;
	}
	while(temp != head);
}

Node *  delete_at_start(Node * head){
	Node * temp = head;
	Node * ptr = head;
	while(ptr->next != head){
		ptr = ptr->next;
	}
	head = head -> next;
	ptr->next = head;
	delete temp;
	
	return head;
}
//
Node * delete_at_index(Node * head,int index){
	Node * temp = head;
	Node * ptr = head->next;
	int i = 0;
	while(i < index-1){
		ptr=ptr->next;
		temp = temp->next;
		i++;
	}
	temp->next = ptr->next;
	delete ptr;
	ptr = NULL;
	
	return head;
	
}

Node * delete_at_last(Node * head){
	Node * temp = head->next;
	Node * ptr = head;
	while(temp->next != head){
		temp = temp->next;
		ptr = ptr->next;
	}
	delete temp;
	temp = NULL;
	ptr->next = head;
	
	return head;
}

int main() {
    Node * head = new Node;
	Node * second = new Node;
	Node * third = new Node;
	Node * fourth = new Node;
	
	head->data = 12;
	head->next = second;
	
	second->data = 32;
	second->next = third;
	
	third->data = 21;
	third->next = fourth;
	
	fourth->data = 29;
	fourth->next = head;
	
	trav(head);

    head = delete_at_start(head);
	cout<<endl;
	trav(head);
	head = delete_at_index(head,2);
	cout<<endl;
	trav(head);
	head = delete_at_last(head);
	cout<<endl;
	trav(head);
	
	
 
}