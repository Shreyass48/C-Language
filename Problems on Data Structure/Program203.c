//code for concepts
// Date : 8/11/21
#include<stdio.h>
#include<stdlib.h>


struct node
{
    int Data;                   
    struct node *next;         
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


int main()
{
    PNODE p = NULL;
    PPNODE q = NULL;
    // (struct node *) malloc (sizeof(struct node))
    p = (PNODE)malloc(sizeof(NODE));  //allocate 12 bytes
    q = &p;                          // q holds address of p.

    return 0;
}

/*
    p                       100
    q                       200
    &p                      200
    &q                      300
    p->data                 11
    p->next                 NULL
    *q                      100
    (*q)->data;             11
    (*q)->next;             NULL
 */

