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

/**
* @brief inserts a value into the back of the list
* @param list to insert the value into
* @param newValue a new value to be inserted into the new node
* @return new node created
*/
Node* PushBack(List *list, ListDataType newValue);

/**
* @brief removes the value from the back of the list and returns it
* @param list to remove the value from
* @return the last value from the list
*/
ListDataType PopBack(List *list);

/**
* @brief deletes a node from the linked list given a node pointer
* @param list to delete node from
* @param target pointer to node to be deleted
* @return the node before the deleted node, NULL if the deleted node was the first node
*/
Node *DeleteNode(List *list, Node *target);

/**
* @brief deletes a node from the linked list given a value
* @param list to delete node from
* @param value of node to be deleted
*/
void DeleteValue(List *list, ListDataType value);

/**
* @brief deletes a node from the linked list given a node pointer
* @param list to find node from
* @param value of node to find
* @return pointer to the node found
*/
Node* Find(List *list, ListDataType value);

/**
* @brief prints a linked list
* @param list to print
*/
void PrintIntList(List *list);

#endif