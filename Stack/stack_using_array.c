#include <stdio.h>
#include <stdlib.h>

#define N 50

int stack[N];
int top = -1;

void push()
{
    int x;
    printf("Enter the element :");
    scanf("%d", &x);
    if (top == N - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    int item;
    if (top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        int item = stack[top];
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element: %d\n", stack[top]);
    }
}

void change(){
  int pos, newValue;
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Enter the position :");
    scanf("%d", &pos);
    if (pos < 1 || pos > top + 1) {
        printf("Invalid position\n");
        return;
    }
    printf("Enter the new value: ");
    scanf("%d", &newValue);
    stack[top - pos + 1] = newValue;
}

void display()
{
    int i;
    printf("Displaying Stack....\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    int ch;
    while (1) {
        printf("\n*** Stack Menu ***");
        printf("\n\n1.Insert\n2.Delete\n3.Display\n4.Peek\n5.Change\n6.Exit");
        printf("\n\nEnter your choice :");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            change();
            break;
        case 6:
            exit(0);
        default:
            printf("\nWrong Choice!!");
        }
    }
    return 0;
}
