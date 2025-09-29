#include <iostream>
#include <string>

using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
};

Node * create_node(int data){
    Node * p = new Node;
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
void preorder_trav(Node * root){
    if(root != NULL){
        cout<<root->data<<" ";
        preorder_trav(root->left);
        preorder_trav(root->right);
    }
}
void postorder_trav(Node * root){
    if(root != NULL){
        postorder_trav(root->left);
        postorder_trav(root->right);
        cout<<root->data<<" ";
    }
}
int main() {
/*
                  a   
              /      \
            d         c
          /   \     /   \
        d      e  f      g
      /         /         \
     h        i            j     
                                  
*/
    Node * a = create_node(12);
    Node * b = create_node(1);
    Node * c = create_node(2);
    Node * d = create_node(3); 
    Node * e = create_node(4); 
    Node * f = create_node(5); 
    Node * g = create_node(6); 
    Node * h = create_node(8); 
    Node * i = create_node(9); 
    Node * j = create_node(10); 


    a->left = b;
    a->right = c;

    b->left = d;
    b->right = e;

    d->left = h;
    
    c->left = f;
    c->right = g;

    f->left = i;

    g->right = j;

    preorder_trav(a);
    cout<<endl;
    postorder_trav(a);


    delete a;
    delete b;
    delete c;
}