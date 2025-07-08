#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

struct Node{
    int data;
    struct Node * next;
};

//traversal in Linked List
void trav(struct Node * head) {
    struct Node * ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
int main() {
    struct Node * head,* second, * third, * fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    //Linking Head and Second Node
    head-> data = 11;
    head-> next = second;

    //Linking Second and Third Node
    second->data = 21;
    second->next = third;
    //Linking Third and Fourth Node
    third->data = 33;
    third->next = fourth;
    //Linking Fourth Node to NULL
    fourth->data = 43;
    fourth->next = NULL;
    trav(head);
    //pending updates



    return 0;
}