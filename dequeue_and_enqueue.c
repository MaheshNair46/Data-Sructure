//
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
} Dequeue;

void init_dequeue(Dequeue *dq) {
    dq->front = 0;
    dq->rear = 0;
}

void insert_front(Dequeue *dq, int element) {
    if (dq->front == 0) {
        printf("Queue is full. Cannot insert at the front.\n");
        return;
    }
    dq->data[--dq->front] = element;
    printf("After inserting %d at the front: ", element);
    for (int i = dq->front; i < dq->rear; i++) {
        printf("%d ", dq->data[i]);
    }
    printf("\n");
}

void insert_rear(Dequeue *dq, int element) {
    if (dq->rear == MAX_SIZE) {
        printf("Queue is full. Cannot insert at the rear.\n");
        return;
    }
    dq->data[dq->rear++] = element;
    printf("After inserting %d at the rear: ", element);
    for (int i = dq->front; i < dq->rear; i++) {
        printf("%d ", dq->data[i]);
    }
    printf("\n");
}

int delete_front(Dequeue *dq) {
    if (dq->front == dq->rear) {
        printf("Queue is empty. Cannot delete from the front.\n");
        return -1;
    }
    int element = dq->data[dq->front++];
    printf("After deleting from the front: ");
    for (int i = dq->front; i < dq->rear; i++) {
        printf("%d ", dq->data[i]);
    }
    printf("\n");
    return element;
}

int delete_rear(Dequeue *dq) {
    if (dq->front == dq->rear) {
        printf("Queue is empty. Cannot delete from the rear.\n");
        return -1;
    }
    int element = dq->data[--dq->rear];
    printf("After deleting from the rear: ");
    for (int i = dq->front; i < dq->rear; i++) {
        printf("%d ", dq->data[i]);
    }
    printf("\n");
    return element;
}

void display(Dequeue *dq) {
    printf("Current queue: ");
    for (int i = dq->front; i < dq->rear; i++) {
        printf("%d ", dq->data[i]);
    }
    printf("\n");
}

int main() {
    Dequeue dq;
    init_dequeue(&dq);

    while (1) {
        printf("\nOptions:\n");
        printf("1. Insert at the front\n");
        printf("2. Insert at the rear\n");
        printf("3. Delete from the front\n");
        printf("4. Delete from the rear\n");
        printf("5. Display queue\n");
        printf("6. Exit\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
                int element;
            case 1:
                printf("Enter element to insert at the front: ");
                scanf("%d", &element);
                insert_front(&dq, element);
                break;
            case 2:
                printf("Enter element to insert at the rear: ");
                scanf("%d", &element);
                insert_rear(&dq, element);
                break;
            case 3:
                delete_front(&dq);
                break;
            case 4:
                delete_rear(&dq);
                break;
            case 5:
                display(&dq);
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}