#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct Node{
	string data;
	struct Node * next;
};

void trav(struct Node * ptr){
	while(ptr != NULL){
		cout<<ptr -> data;
		ptr = ptr -> next;
	}
}
struct Node * Atfirst(struct Node * head,string data){
	struct Node * ptr = new Node;
	ptr -> data = data;
	ptr -> next = head;
	return ptr;
}
struct Node *Atindex(struct Node * head,int index,string data){
	struct Node * ptr = new Node;
	struct Node * temp = head;
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

	
}