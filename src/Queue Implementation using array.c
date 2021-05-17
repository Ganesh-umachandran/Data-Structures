#include<stdio.h>
#include<stdlib.h>
int main()
{
    int length=0;
    printf("Enter the length of the Queue : ");
    scanf("%d",&length);
    int queue[length],ch=1,front=0,rear=0,i,j=1,x=length;
    printf("\n1.Insertion in Queue \n2.Deletion in Queue\n3.Display  Queue\n4.Exit Queue");
    while(ch)
    {
        printf("\nEnter the Choice between 1 to 4:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==x)
                printf("\n Currently Queue is Full");
            else
            {
                printf("\n Enter number %d:",j++);
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("\n Currently Queue is empty");
            }
            else
            {
                printf("\n Deleted Element is %d",queue[front++]);
                x++;
            }
            break;
        case 3:
            printf("\nQueue Elements are:\n");
            if(front==rear)
                printf("\nCurrently Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid input:Please enter the valid input");
            }
        }
    }
    return 0;
}

