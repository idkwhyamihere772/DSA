#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
template <class T>
struct Node{
	T data;
	struct Node<T> * next;
};
template <class T>
struct Node<T> * add(struct Node<T> * head1,struct Node<T> * head2);
void trav(struct Node<T> * ptr){
	while(ptr != NULL){
		cout<<ptr -> data;
		ptr = ptr -> next;
	}
}
template<class T>
struct Node<T> * Atfirst(struct Node<T> * head,T data){
	struct Node<T> * ptr = new Node;
	ptr -> data = data;
	ptr -> next = head;
	return ptr;
}
template<class T>
struct Node<T> *Atindex(struct Node <T>* head,int index,T data){
	struct Node<T> * ptr = new Node;
	struct Node <T>* temp = head;
	int i = 0;
	while(i!=index-1){
		temp = temp-> next;
		i++;
	}
	ptr ->data = data;
	ptr->next = temp->next;
	temp->next = ptr;
    return head;
} 
template<class T>
struct Node <T>*Atlast(struct Node <T> * head,T data){
	struct Node <T> *ptr = new Node;
	ptr->data = data;
	struct Node <T> *p = head;
	while(p-> next != NULL){
		p = p->next;
	}
	p->next = ptr;
	ptr->next = NULL;
	return head;
}
int main(){
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	
	// head = (struct Node *)malloc(sizeof(struct Node));
	// second = (struct Node *)malloc(sizeof(struct Node));
	// third = (struct Node *)malloc(sizeof(struct Node));
	// fourth= (struct Node *)malloc(sizeof(struct Node));

    // we would use new instead of malloc in C++ because malloc is a C function abd doesnt call constructors

	head = new Node;
	second = new Node;
	third = new Node;
	fourth = new Node;
	
	head -> data = "First Node -> ";
	head -> next = second;
	
	second -> data = "Second Node -> ";
    second -> next = third;
	
	third -> data = "Third Node -> ";
	third -> next = fourth;
	
	fourth -> data = "fourth Node -> ";
	fourth -> next = NULL;
	head = Atindex(head, 3, "new node -> ");
	
    head = Atfirst(head,"new node -> ");

	head = Atlast(head,"new node -> NULL");
	trav(head);
	cout<<endl;
	struct Node * head1 = new Node;
	struct Node * second1 = new Node;
	struct Node * third1 = new Node;

	struct Node * head2 = new Node;
	struct Node * second2 = new Node;
	struct Node * third2 = new Node;

    head1->data

	
}