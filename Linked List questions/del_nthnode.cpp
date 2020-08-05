#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void push(struct node** head_ref, int new_data){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node -> data = new_data;
    new_node-> next = *head_ref;
    (*head_ref) = new_node;
}

int printlist(struct node* head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head-> next;
    }
}

void deleteNode(struct node* head){
    node* prev;
    if(head == NULL){
        return;
    }
    else{
        while(head -> next != NULL){
            head->data = head->next->data;
            prev = head;
            head = head-> next;
        }
        prev -> next = NULL;
    }
}

int main() 
{ 
    /* Start with the empty list */
    node* head = NULL; 
  
    /* Use push() to construct below list  
    1->12->1->4->1 */
    push(&head, 1); 
    push(&head, 4); 
    push(&head, 1); 
    push(&head, 12); 
    push(&head, 1); 
  
    cout << "Before deleting \n"; 
    printlist(head); 
  
    /* I m deleting the head itself.  
        You can check for more cases */
    deleteNode(head); 
  
    cout << "\nAfter deleting \n"; 
    printlist(head); 
    return 0; 
} 
 