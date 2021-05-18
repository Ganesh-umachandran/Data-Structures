// Programmer: Ganesh Umachandran date: 18-05-2021
// File: Push.cpp
// Purpose: This file contains the Push function for Implementation of Stack.
#include "Header.h"
Node *Push(Node *Top, int item)
{
    Node *tmp;
    tmp = new (struct Node);
    tmp->Info = item;
    tmp->Link = Top;
    Top = tmp;
    return Top;
}