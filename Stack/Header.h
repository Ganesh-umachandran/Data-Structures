// Programmer: Ganesh Umachandran date: 18-05-2021
// File: Header.h
// Purpose: This file contains the prototypes for function definitions for Implementation of Stack.
// Constants for the implementation of Stack
#ifndef HEADER_H // Header.h in uppercase follows the convention
#define HEADER_H

#include<iostream>
#include<cstdlib>

using namespace std;

 // Node Declaration
struct Node
{
    int Info;
    struct Node *Link;    
}*Top;

#endif
