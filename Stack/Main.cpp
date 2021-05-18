// Programmer: Ganesh Umachandran date: 18-05-2021
// File: Main.cpp
// Purpose: This file contains the main function for Implementation of Stack.
#include "Push.h"
#include "Pop.h"
#include "Stack_Check.h"

int main()
{
    int choice, item;
    //Stack_List sl;
    while (1)
    {
        cout<<"\n-------------"<<endl;
        cout<<"Operations on Stack"<<endl;
        cout<<"\n-------------"<<endl;
        cout<<"1.Push Element into the Stack"<<endl;
        cout<<"2.Pop Element from the Stack"<<endl;
        cout<<"3.check the Stack"<<endl;
        cout<<"4.Quit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter value to be Pushed into the stack: ";
            cin>>item;
            Top = Push(Top, item);
            break;
        case 2:
            Top = Pop(Top);
            break;
        case 3:
            Stack_Check(Top);
            break;
        case 4:
            exit(1);
            break;
        default:
            cout<<"Wrong Choice"<<endl;
        }
    }
    return 0;
}