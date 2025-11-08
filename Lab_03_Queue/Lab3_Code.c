//HunkarChaware-IT-B-133
/* AIM: Design, Develop and Implement a menu driven Program in C for the following operations on QUEUE of Characters (Array Implementation of Queue with maximum size MAX)
a. Insert an Element on to QUEUE
b. Delete an Element from QUEUE
c. Demonstrate Overflow and Underflow situations on QUEUE
d. Display the status of QUEUE
e. Exit
Support the program with appropriate functions for each of the above operations.
*/
#include <stdio.h>
#include <stdlib.h>   
#define MAX 50
char queue[MAX];
int front = -1, rear = -1;
void insert(char x) {
    if(rear == MAX - 1) {
        printf("Queue Overflow!\n");
        return;
    }
    if(front == -1)
        front = 0;
    queue[++rear] = x;
    printf("%c inserted into queue.\n", x);
}
void delete() {
    if(front == -1 || front > rear) {
        printf("Queue Underflow!\n");
        return;
    }
    printf("%c deleted from queue.\n", queue[front]);
    front++;
}
void display() {
    if(front == -1 || front > rear) {
        printf("Queue is Empty.\n");
        return;
    }
    printf("Queue Elements: ");
    for(int i = front; i <= rear; i++)
        printf("%c ", queue[i]);
    printf("\n");
}

int main() {
    int choice;
    char ch;

    while(1) {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter character to insert: ");
                scanf(" %c", &ch);
                insert(ch);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0); 
            default:
                printf("Invalid Choice!\n");
        }
    }
}