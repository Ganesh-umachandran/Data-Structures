// Programmer: Ganesh Umachandran date: 18-05-2021
// File: Pop.cpp
// Purpose: This file contains the Pop function for Implementation of Stack.
#include "node.h"

Node *Pop(Node *Top)
{
    Node *tmp;
    if (Top == NULL)
        cout<<"Stack is Empty"<<endl;
    else
    {       
        tmp = Top;
        cout<<"Element Popped: "<<tmp->Info<<endl;
        Top = Top->Link;
        delete(tmp);
    }
    return Top;
}