#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void push(struct node** head_ref, int data){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *head_ref;
    (*head_ref) = new_node;
}

int printList(struct node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

void printMiddle(struct node* head){
    int count=0;
    struct node* mid = head;
    while(head != NULL){
        if(count & 1){
            mid = mid->next;
        }
        ++count;
        head = head->next;
    }
    if(mid != NULL)
        cout<<"the middle element is "<<mid->data;
}

int main(){
    struct node* head = NULL;
    int i; 
  
    for (i=5; i>0; i--) 
    { 
        push(&head, i); 
        printList(head); 
    }
        printMiddle(head); 
    
  
    return 0;
}