#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include<stdlib.h>

typedef int ListDataType;

typedef struct Node_t
{
    ListDataType data;
    struct Node_t *next;
}Node;

typedef struct List_t
{
    Node *head;
}List;

List* CreateList(void);

void FreeList(List *list);

size_t GetListSize(List *list);

Node* GetListHead(List *list);

Node* GetNextNode(Node *currentNode);

ListDataType GetValue(Node *node);

Node* Insert(Node *after, ListDataType newValue);

Node* PushFront(List *list, ListDataType newValue);

Node* PushBack(List *list, ListDataType newValue);

ListDataType PopBack(List *list);

Node *DeleteNode(List *list, Node *target);

void DeleteValue(List *list, ListDataType value);

Node* Find(List *list, ListDataType value);

void PrintIntList(List *list);

#endif