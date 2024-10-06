//To develop a profgram that implements stack operration on a one dimeensional array
#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
    top=-1;
    printf("\n Enter the size of Stack: ");
    scanf("%d",&n);
    printf("\n stack opereation using Array");
    printf("\n 1.push \n 2.pop \n 3.display \n 4.exit");
    do
    {
        printf("\n Enter the choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3:display();
            break;
            case 4:
            printf("\n\t Exit point");
            break;
            default:
            printf("\n\t please enter a valid choice  1/2/3/4");
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\t Stack is overflow");
    }
    else
    {
        printf("Enter the value to be inserted: ");
         scanf("%d",&x);
         top++;
         stack[top]=x;
    }
    };
    void pop()
    {
        if (top<=-1)
        {
            printf("\n \t Stack is underflow");
        }
        else
        {
            printf("\n\t the popped elemnet is %d",stack[top]);
        top--;
        }
    }
    void display()
    {
        if(top>=0)
        {
            printf("\n the element in Stack are\n");
            for (i=top;i>=0;i--)
            printf("\n %d",stack[i]);
        printf("\n  press next choice");
        }
        else{
            printf("\n the stack is empty");
        }
    }