#include <stdio.h>

#define SIZE 5

int stack[SIZE];
int top = -1;

// Push operation
void push(int newdata)
{
    if (top == SIZE - 1)
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        top++;
        stack[top] = newdata;
        printf("%d pushed into stack.\n", newdata);
    }
}

// Pop operation
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
    }
    else
    {
        printf("Deleted element: %d\n", stack[top]);
        top--;
    }
}

// Display operation
void displaystack()
{
    int i;

    if (top == -1)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("Stack elements are:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

// Main function
int main()
{
    int option;
    int mydata;

    do
    {
        printf("\n1. Push data");
        printf("\n2. Pop data");
        printf("\n3. Display stack");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &option);

        switch (option)
        {
            case 1:
                printf("Enter the stack data: ");
                scanf("%d", &mydata);
                push(mydata);
                break;

            case 2:
                pop();
                break;

            case 3:
                displaystack();
                break;

            case 4:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (option != 4);

    return 0;
}