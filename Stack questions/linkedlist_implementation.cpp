#include<iostream>
using namespace std;

class Stacknode{
    public:
        int data;
        Stacknode* next;
};

Stacknode* newnode(int data){
    Stacknode* stacknode = new Stacknode();
    stacknode->data = data;
    stacknode->next = NULL;
    return stacknode;
};

int isEmpty(Stacknode* root){
    return !root;
}

void push(Stacknode** root, int data){
    Stacknode* stacknode = newnode(data);
    stacknode ->next = *root;
    *root = stacknode;
    cout<<data<<" pushed to stack\n";
}

int pop(Stacknode** root){
    if(isEmpty(*root)){
        return INT8_MIN;
    }
    Stacknode* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

int peek(Stacknode* root){
    if(isEmpty(root))
        return INT8_MIN;
    return root->data;
}

int main(){
    Stacknode* root = NULL;
    push(&root, 10); 
    push(&root, 20); 
    push(&root, 30); 
  
    cout << pop(&root) << " popped from stack\n"; 
  
    cout << "Top element is " << peek(root) << endl; 
  
    return 0; 
} 
