#include <stdio.h>
#include <string.h>

#define MAX 5

char queue[MAX][50];
int front = -1;
int rear = -1;

void enqueue(char doc[])
{
    if(rear == MAX-1)
    {
        printf("Queue is full\n");
        return;
    }

    if(front == -1)
        front = 0;

    rear++;
    strcpy(queue[rear], doc);
    printf("Document added to queue\n");
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("No document to print\n");
        return;
    }

    printf("Printing document: %s\n", queue[front]);
    front++;
}

void display()
{
    if(front == -1 || front > rear)
    {
        printf("No pending documents\n");
        return;
    }

    printf("Pending documents:\n");
    for(int i = front; i <= rear; i++)
    {
        printf("%s\n", queue[i]);
    }
}

int main()
{
    int choice;
    char doc[50];

    while(1)
    {
        printf("\n--- Print Queue Menu ---\n");
        printf("1. Add Document\n");
        printf("2. Print Document\n");
        printf("3. Display Pending Documents\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                printf("Enter document name: ");
                fgets(doc, sizeof(doc), stdin);
                doc[strcspn(doc,"\n")] = 0;
                enqueue(doc);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}