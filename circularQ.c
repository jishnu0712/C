#include <stdio.h>
void enQueue(int arr[], int front, int rear, int size, int value)
{
    if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
    {
        printf("\nQueue is Full");
        return;
    }
    else if (front == -1) /* Insert First Element */
    {
        front = rear = 0;
        arr[rear] = value;
    }
    else if (rear == size - 1 && front != 0)
    {
        rear = 0;
        arr[rear] = value;
    }
    else
    {
        rear++;
        arr[rear] = value;
    }
}

// Function to delete element from Circular Queue
int deQueue(int arr[], int front, int rear, int size)
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return -1;
    }

    int data = arr[front];
    arr[front] = -1;
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == size - 1)
        front = 0;
    else
        front++;

    return data;
}

// Function displaying the elements
// of Circular Queue
void displayQueue(int arr[], int front, int rear)
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nElements in Circular Queue are: ");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("%d ", arr[i]);
    }
    else
    {
        for (int i = front; i < size; i++)
            printf("%d ", arr[i]);

        for (int i = 0; i <= rear; i++)
            printf("%d ", arr[i]);
    }
}

int main()
{
    // Initialize front and rear
    int rear = -1, front = -1;

    // Circular Queue
    int size;
    printf("Enter the size of Queue");
    scanf("%d", &size);

    int arr[size];

    // Inserting elements in Circular Queue
    enQueue(arr, front, rear, size, 14);
    enQueue(arr, front, rear, size, 22);

    // Display elements present in Circular Queue
    displayQueue(arr, front, rear);

    // Deleting elements from Circular Queue
    printf("\nDeleted value = %d", deQueue(arr, front, rear));
    printf("\nDeleted value = %d", deQueue(arr, front, rear));

    displayQueue(arr, front, rear);

    enQueue(arr, front, rear, size, 9);
    // enQueue(arr,front,rear,size,9);
    // enQueue(arr,front,rear,size,8);

    displayQueue(arr, front, rear);

    enQueue(arr, front, rear, size, 20);
    return 0;
}