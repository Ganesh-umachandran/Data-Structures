#include "header/header.h"

class doubleLinkedList
{
public:
    void insertAtBeginning(int value)
    {
        NodeDll *newNode;
        newNode = (NodeDll *)malloc(sizeof(NodeDll));
        newNode->data = value;
        newNode->previous = NULL;
        if (head == NULL)
        {
            newNode->next = NULL;
            head = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
        printf("\nInsertion success!!!\n");
    }
    void insertAtEnd(int value)
    {
        NodeDll *newNode;
        newNode = (NodeDll *)malloc(sizeof(NodeDll));
        newNode->data = value;
        newNode->next = NULL;
        if (head == NULL)
        {
            newNode->previous = NULL;
            head = newNode;
        }
        else
        {
            NodeDll *temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
            newNode->previous = temp;
        }
        printf("\nInsertion success!!!\n");
    }
    void insertAfter(int value, int location)
    {
        NodeDll *newNode;
        newNode = (NodeDll *)malloc(sizeof(struct NodeDll));
        newNode->data = value;
        if (head == NULL)
        {
            newNode->previous = newNode->next = NULL;
            head = newNode;
        }
        else
        {
            NodeDll *temp1 = head, *temp2;
            while (temp1->data != location)

            {
                if (temp1->next == NULL)
                {
                    printf("\nGiven NodeDll is not found in the list!!!\n");
                    return;
                }
                temp1 = temp1->next;
            }
            temp2 = temp1->next;
            if (temp2==NULL)
            {
                insertAtEnd(value);
                return;
            }
            temp1->next = newNode;
            newNode->previous = temp1;
            newNode->next = temp2;
            temp2->previous = newNode;
            printf("\nInsertion success!!!\n");
        }
    }
    void deleteBeginning()
    {
        if (head == NULL)
            printf("\nList is Empty!!! Deletion not possible!!!\n");
        else
        {
            NodeDll *temp = head;
            if (temp->previous == temp->next)
            {
                head = NULL;
                free(temp);
            }
            else
            {
                head = temp->next;
                head->previous = NULL;
                free(temp);
            }
            printf("\nDeletion success!!!\n");
        }
    }
    void deleteEnd()
    {
        if (head == NULL)
            printf("\nList is Empty!!! Deletion not possible!!!\n");
        else
        {
            NodeDll *temp = head;
            if (temp->previous == temp->next)
            {
                head = NULL;
                free(temp);
            }
            else
            {
                while (temp->next != NULL)
                    temp = temp->next;
                temp->previous->next = NULL;
                free(temp);
            }
            printf("\nDeletion success!!!\n");
        }
    }
    void deleteSpecific(int delValue)
    {
        if (head == NULL)
            printf("\nList is Empty!!! Deletion not possible!!!\n");
        else
        {
            NodeDll *temp = head;
            while (temp->data != delValue)
            {
                if (temp->next == NULL)
                {
                    printf("\nGiven NodeDll is not found in the list!!!\n");
                }
                else
                {
                    temp = temp->next;
                }
            }
            if (temp == head)
            {
                head = temp->next;
                head->previous=NULL;
                free(temp);
            }
            else
            {
                temp->previous->next = temp->next;
                free(temp);
            }
            printf("\nDeletion success!!!\n");
        }
    }
    void display()
    {
        if (head == NULL)
            printf("\nList is Empty!!!\n");
        else
        {
            NodeDll *temp = head;
            printf("\nList elements are: \n");
            printf("NULL <--- ");
            while (temp!= NULL)
            {
                if (temp->next==NULL)
                {
                    printf("%d",temp->data);
                    break;
                }
                printf("%d <===> ", temp->data);
                temp=temp->next;
            }
            printf("---> NULL\n");
        }
    }
};
int main()
{
    int choice1, choice2, value, location;
    doubleLinkedList obj;
    while (1)
    {
        bool isFirst = true;
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n\nEnter your choice: ");
        cin>>choice1;
        switch (choice1)
        {
        case 1:
            printf("\nEnter the value to be inserted: ");
            cin>>value;
            while (1)
            {
                
                if (!isFirst)
                {
                    string repeat;
                    printf("\nDo you want to insert an element again?(y/n) : ");
                    cin>>repeat;
                    if (repeat.compare("y")== 0)
                    {
                        printf("\nEnter the value to be inserted: ");
                        cin>>value;
                    }
                    else
                        break;
                }
                bool isCancel = false;
                printf("\nSelect from the following Inserting options\n");
                printf("1. At Beginning\n2. At End\n3. After a NodeDll\n4.Cancel the current option\n\nEnter your choice: ");
                scanf("%d", &choice2);
                switch (choice2)
                {
                case 1:
                    obj.insertAtBeginning(value);
                    break;
                case 2:
                    obj.insertAtEnd(value);
                    break;
                case 3:
                    printf("\nEnter the location after which you want to insert: ");
                    cin>>location;
                    obj.insertAfter(value, location);
                    break;
                case 4:
                    isCancel = true;
                    break;
                default:
                    printf("\nPlease select correct Inserting option!!!\n");
                }
                if (isCancel)
                    break;
                isFirst = false;
            }
            break;
        case 2:
            while (1)
            {
                bool isCancel = false;
                printf("\nSelect from the following Deleting options\n");
                printf("1. At Beginning\n2. At End\n3. Specific NodeDll\n4. Cancel the current option\nEnter your choice: ");
                cin>>choice2;
                switch (choice2)
                {
                case 1:
                    obj.deleteBeginning();
                    break;
                case 2:
                    obj.deleteEnd();
                    break;
                case 3:
                    printf("\nEnter the NodeDll value to be deleted: ");
                    cin>>location;
                    obj.deleteSpecific(location);
                    break;
                case 4:
                    isCancel = true;
                    break;
                default:
                    printf("\nPlease select correct Deleting option!!!\n");
                }
                if (isCancel == true)
                    break;
            }
            break;
        case 3:
            obj.display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nPlease select correct option!!!");
        }
    }
    return 0;
}
