#include <stdio.h>
#define MAX 4

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue() {
    int value;
    if (rear == MAX - 1) {
        printf("Queue overflow! Cannot insert.\n");
    } else {
        printf("Enter value to insert: ");
        scanf("%d", &value);

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        printf("%d inserted successfully\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue underflow! Cannot delete\n");
    } else {
        printf("%d deleted successfully\n", queue[front]);
        front++;
    }
}

void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Front element is: %d\n", queue[front]);
    }
}

void display() {
    int i;
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements are:\n");
        for (i = front; i <= rear; i++) {
            printf("%d\n", queue[i]);
        }
    }
}

int main() {
    int choice;
    do {
        printf("\n---QUEUE MENU---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 5);

    return 0;
}