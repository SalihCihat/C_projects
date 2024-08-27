#include <stdio.h>
#include <stdlib.h>


struct Node {

    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head, int new_data) {

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node -> data = new_data;

    new_node -> next = (*head);

    (*head) = new_node;
}

void insertAtEnding(struct Node** head, int new_data) {

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node -> data = new_data;

    new_node -> next = NULL;

    if(*head == NULL){
        *head = new_node;
        return;
    }

    struct Node* last = *head;
    while(last -> next != NULL){
        last = last -> next;
    }

    last -> next = new_node;
}

void deleteFirst(struct Node** head){

    if(*head == NULL){
        printf("The list is empty.\n");
        return;    
    }
    
    struct Node* temp = *head;
    *head = (*head) -> next;
    free(temp);
    
}

void deleteLast(struct Node** head){
        
    if(*head == NULL){
        printf("The list is empty.\n");
        return;    
    }    

    if ((*head)->next == NULL) {  // Only one node in the list
        free(*head);
        *head = NULL;
        return;
    }    

    struct Node* temp = *head;
    struct Node* prev = NULL;

    while(temp -> next != NULL){
        prev = temp;
        temp = temp -> next;
    }
    
    prev -> next = NULL;
    free(temp);

}

void printList(struct Node* head) {

    struct Node* temp = head;
    while(temp != NULL) {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");
}

int main(){
    
    struct Node* head = NULL;

    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtEnding(&head, 3);
    printList(head);
    deleteLast(&head);
    printList(head);

    struct Node* temp;
    while(head != NULL) {
        temp = head;
        head = head -> next;
        free(temp);
    }    


    return 0;
}
