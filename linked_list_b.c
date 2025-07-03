#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
};

int main(){

    struct Node x1, x2, x3, x4;
    printf("Enter 4 integers:\n");
    printf("Node 1: ");
    scanf("%d", &x1.data);
    printf("Node 2: ");
    scanf("%d", &x2.data);   
    printf("Node 3: ");
    scanf("%d", &x3.data);
    printf("Node 4: ");
    scanf("%d", &x4.data);
    struct Node* head = &x1;
    x1.next = &x2;
    x2.next = &x3;
    x3.next = &x4;
    x4.next = NULL;       
    struct Node* current = head;
    while (current != NULL) {
        printf("Data: %d\n", current->data);
        current = current->next;
    }
    return 0;
}

