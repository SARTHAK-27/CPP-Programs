#include<iostream>
#include<assert.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void push(struct node** head_ref, int new_data){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node ->data = new_data;
    new_node -> next = *head_ref;
    (*head_ref) = new_node;
}

int GetNth(struct node* head, int n){
    int count =1;
    if(count == n){
        return head->data;
    }
    return GetNth(head->next, n-1);
}

int getnth(struct node* head, int key){
    node* current = head;
    int count = 0;
    while(current != NULL){
        if(count == key){
            return current->data;
        }
        count++;
        current = current->next;
    }

    assert(0); //fail
}

int main(){
    struct node* head = NULL;
    push(&head, 1); 
    push(&head, 4); 
    push(&head, 1); 
    push(&head, 12); 
    push(&head, 1);   
     
    /* Check the count function */
    cout<<"Element at index 3 is "<<GetNth(head, 3)<<endl; 
    cout<<"Element at index 3 is "<<getnth(head, 3);   
    return 0;
}