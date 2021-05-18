// Programmer: Ganesh Umachandran date: 18-05-2021
// File: Stack_Check.cpp
// Purpose: This file contains the Displaying function of Stack.
#include "node.h"
void Stack_Check(Node *Top)
{       
    Node *ptr;
    ptr = Top;
    if (Top == NULL)
        cout<<"Stack is empty"<<endl;
    else
    {
        cout<<"Stack elements :"<<endl;
        while (ptr != NULL)
        {
            cout<<ptr->Info<<endl;
            ptr = ptr->Link;
        }
    }
}