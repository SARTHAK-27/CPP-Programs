#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void push(struct node** head_ref, int new_data){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void deleteList(struct node** head_ref){
    node* current = (*head_ref);
    node* next;

    while(current != NULL){
        next = current->next;
        free(current);
        current = next;
    }
    *head_ref = NULL;
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
      
    cout << "Deleting linked list";  
    deleteList(&head);  
      
    cout << "\nLinked list deleted";  
}