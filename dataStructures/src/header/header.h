// Programmer: Ganesh Umachandran date: 18-05-2021
// File: header.h
// Purpose: This file contains the prototypes for function definitions for Implementation of Stack.
// Constants for the implementation of Stack
#ifndef HEADER_H // Header.h in uppercase follows the convention
#define HEADER_H

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <stdio.h>
#include <string.h>
using namespace std;

struct NodeDll
{
    int data;
    struct NodeDll *previous, *next;
} *head = NULL;

struct NodeS
{
    int Info;
    struct NodeS *Link;
} * Top;

struct NodeQ
{
    int data;
    struct NodeQ *next;
};
struct NodeQ *front = NULL;
struct NodeQ *rear = NULL;
struct NodeQ *temp;

#endif