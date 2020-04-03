#include <stdio.h>
#include <stdlib.h>

struct NodeStruct
{
    int info;
    struct NodeStruct *next;
};

typedef struct NodeStruct NODE;

NODE* CreateSLL()
{
    NODE *HEAD = NULL;
    printf("\n/****Creating Linked List having one node with dynamic allocation******/\n");
    HEAD = (NODE*) malloc(sizeof(NODE));
    HEAD->info = 10;
    HEAD->next = NULL;
    printf("\n Address of new node = %p\n", HEAD);
    printf("\n Information part of new node = %d\n", HEAD->info);
    printf("\n Next part of new node = %p\n", HEAD->next);
    return HEAD;
}

int main()
{
    CreateSLL();
    return 0;
}