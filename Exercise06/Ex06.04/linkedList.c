#include "linkedList.h"
#include<stdio.h>
#include<malloc.h>

List *CreateList(void)
{
    List* list = (List *)malloc(sizeof(List));

    if(list)
        list->head = NULL;

    return list;
}

void FreeList(List *list)
{
    if (!list)
    {
        g_lastLinkedListError = 1;
        return;
    }

    if (list->head)
    {
        Node *iter = list->head;

        while (iter)
        {
            Node *next = iter->next;
            free(iter);
            iter = next;
        }
    }

    free(list);
}

size_t GetListSize(List *list)
{
    size_t counter = 0;

    if (!list->head)
    {
        return counter;
        g_lastLinkedListError = 1;
    }

    if (list->head != NULL)
        ++counter;

    Node *iter = list->head;

    while (iter->next != NULL)
    {
        ++counter;
        iter = iter->next;
    }

    return counter;
}

Node *GetListHead(List *list)
{
    if (!list)
    {
        g_lastLinkedListError = 1;
        return NULL;
    }

    return list->head;
}

Node *GetNextNode(Node *currentNode)
{
    if (!currentNode->next)
    {
        g_lastLinkedListError = 2;
        return NULL;
    }

    return currentNode->next;
}

ListDataType GetValue(Node *node)
{
    if (!node)
    {
        g_lastLinkedListError = 2;
        return -1;
    }

    return node->data;
}

Node *Insert(Node* after, ListDataType newValue)
{
    if (!after)
    {
        g_lastLinkedListError = 2;
        return NULL;
    }

    Node *newNode = (Node *)malloc(sizeof(Node));

    if (newNode)
    {
        newNode->data = newValue;
        newNode->next = after->next;
    }

    after->next = newNode;

    return newNode;
}

Node *PushFront(List *list, ListDataType newValue)
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    if (newNode)
    {
        newNode->data = newValue;
        newNode->next = list->head;
    }

    list->head = newNode;

    return newNode;
}

Node *PushBack(List *list, ListDataType newValue)
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    if (newNode)
    {
        newNode->data = newValue;
        newNode->next = NULL;
    }

    if (list->head == NULL)
    {
        list->head = newNode;
        return newNode;
    }

    Node *iter = list->head;

    while (iter->next != NULL)
    {
        iter = iter->next;
    }

    iter->next = newNode;

    return newNode;
}

ListDataType PopBack(List *list)
{
    if (!list->head)
        return -1;

    ListDataType returnValue;

    if (list->head->next == NULL)
    {
        returnValue = list->head->data;

        free(list->head);

        return returnValue;
    }

    Node *iter = list->head->next;

    Node *iterBehind = list->head;

    while (iter->next != NULL)
    {
        iter = iter->next;
        iterBehind = iterBehind->next;
    }

    returnValue = iter->data;

    iterBehind->next = NULL;

    free(iter);

    return returnValue;
}

Node *DeleteNode(List* list, Node* target)
{
    if (!list->head)
        return NULL;

    if (list->head == target)
    {
        Node *temp = list->head;
        list->head = list->head->next;
        free(temp);
        return NULL;
    }

    Node* iter = list->head;

    while (iter->next != NULL)
    {
        if (iter->next == target)
        {
            iter->next = target->next;
            free(target);
            return iter;
        }

        iter = iter->next;
    }

    return NULL;
}

void DeleteValue(List* list, ListDataType value)
{
    if (!list->head)
        return;

    if (list->head->data == value)
    {
        Node *temp = list->head;
        list->head = list->head->next;
        free(temp);
        return;
    }

    Node *iter = list->head;

    while (iter->next != NULL)
    {
        if (iter->next->data == value)
        {
            Node *temp = iter->next;
            iter->next = iter->next->next;
            free(temp);
            return;
        }

        iter = iter->next;
    }
}

Node *Find(List *list, ListDataType value)
{
    Node *iter = list->head;

    while (iter->next != NULL)
    {
        if (iter->next->data == value)
            return iter->next;

        iter = iter->next;
    }

    if (iter->data == value)
        return iter;

    return NULL;
}

void PrintIntList(List *list)
{
    Node *iter = list->head;

    printf("List: ");

    while (iter != NULL)
    {
        printf("%d ", iter->data);
        iter = iter->next;
    }

    printf("\n");
}