#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    
    top=-1;
    printf("\n Enter the size of Stack,Please enter a valide number between 1 to 100:");
    scanf("%d",&n);
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t Program exited ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice between 1 to 4");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\t**Stack is currently over flowing**");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t** Stack is currently under flowing**");
    }
    else
    {
        printf("\n\t The removed elements are %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in Stack are \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n enter the value for the next action");
    }
    else
    {
        printf("\n The Stack is currently empty");
    }
   
}