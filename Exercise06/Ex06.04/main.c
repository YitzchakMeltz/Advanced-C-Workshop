#include "linkedList.h"
#include<stdio.h>

int main(void)
{
    //===========================================================================
    //============================= Test Create List ============================

    List* list = CreateList();
    PrintIntList(list);

    //===========================================================================
    //=========================== Test GetListSize Empty ========================
    printf("List size is %d\n", GetListSize(list));

    //===========================================================================
    //=============================== Test PushBack =============================

    PushBack(list, 100);
    PrintIntList(list);

    PushBack(list, 200);
    PrintIntList(list);

    //===========================================================================
    //=============================== Test PushFront ============================

    PushFront(list, 50);
    PrintIntList(list);

    PushFront(list, 30);
    PrintIntList(list);

    //===========================================================================
    //============================= Test Insert & Find ==========================

    Insert(Find(list, 200), 300);
    PrintIntList(list);

    Insert(Find(list, 100), 150);
    PrintIntList(list);

    //===========================================================================
    //========================== Test GetListSize Not Empty =====================
    printf("List size is %d\n", GetListSize(list));

    //===========================================================================
    //=============================== Test DeleteNode ===========================
    DeleteNode(list, Find(list, 150));
    PrintIntList(list);
    printf("List size is %d\n", GetListSize(list));

    DeleteNode(list, Find(list, 300));
    PrintIntList(list);
    printf("List size is %d\n", GetListSize(list));

    //===========================================================================
    //=============================== Test DeleteValue ==========================
    DeleteValue(list, 200);
    PrintIntList(list);
    printf("List size is %d\n", GetListSize(list));

    DeleteValue(list, 50);
    PrintIntList(list);
    printf("List size is %d\n", GetListSize(list));

    //===========================================================================
    //================================ Test PushBack ============================
    PushFront(list, PopBack(list));
    PrintIntList(list);
    printf("List size is %d\n", GetListSize(list));

    //===========================================================================
    //================================ Test FreeList ============================
    FreeList(list);
    PrintIntList(list);

    return 0;
}