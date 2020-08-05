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

int count(node* head, int search){
    node* current = head;
    int count = 0;
    while(current != NULL){
        if(current ->data == search){
            count++;
        }
        current = current->next;
    }
    return count;
}

int main() 
{ 
    /* Start with the empty list */
    node* head = NULL; 
  
    /* Use push() to construct below list  
    1->2->1->3->1 */
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 1); 
    push(&head, 2); 
    push(&head, 1); 
  
    /* Check the count function */
    cout << "count of 1 is " << count(head, 1); 
    return 0; 
} 
 