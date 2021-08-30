#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include<stdlib.h>

/**
* @file Linked List
*/

// 0 program exited normally
// 1 Exited with ERROR. List is NULL.
// 2 Exited with ERROR. Node is NULL.
static int g_lastLinkedListError = 0;

typedef int ListDataType;

/**
* @brief struct of type Node for Linked List use
* @param data the data contained in the node
* @param next pointer to the next Node
*/
typedef struct Node_t
{
    ListDataType data;
    struct Node_t *next;
}Node;

/**
* @brief struct of type List
* @param head pointer to the head of the list
*/
typedef struct List_t
{
    Node *head;
}List;

/**
* @brief creates a new empty linked list
* @return the newly created empty list
*/
List* CreateList(void);

/**
* @brief deallocates all allocated memory used for list and nodes
* @param list to free
*/
void FreeList(List *list);

/**
* @param counts the element in a linked list
* @param list to be counted
* @return the size of the list
*/
size_t GetListSize(List *list);

/**
* @brief gets the head of the list
* @param list to find head
* @return pointer tothe head of the list
*/
Node* GetListHead(List *list);

/**
* @brief gets the next node in the list
* @param list to find next node
* @return pointer to the next node
*/
Node* GetNextNode(Node *currentNode);

/**
* @brief gets the value from a node
* @param node to get value
* @return value from the node
*/
ListDataType GetValue(Node *node);

/**
* @brief inserts a value into a new node after a given node
* @param after pointer to node to be inserted after
* @param newValue a new value to be inserted into the new node
* @return new node created
*/
Node* Insert(Node *after, ListDataType newValue);

/**
* @brief inserts a value into the head of the list
* @param list to insert the value into
* @param newValue a new value to be inserted into the new node
* @return new node created
*/
Node* PushFront(List *list, ListDataType newValue);

Node* PushBack(List *list, ListDataType newValue);

ListDataType PopBack(List *list);

Node *DeleteNode(List *list, Node *target);

void DeleteValue(List *list, ListDataType value);

Node* Find(List *list, ListDataType value);

void PrintIntList(List *list);

#endif