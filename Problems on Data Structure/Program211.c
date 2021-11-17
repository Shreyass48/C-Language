// Singly Circular
// 15/11/21

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int Data;
    struct node * Next;
}NODE,*PNODE,**PPNODE;

void Display(PNODE Head, PNODE Tail)
{
    if((Head == NULL) && (Tail == NULL))    //Filter : For Empty LL
    {
        return ;
    }
    do
    {
        printf("|%d| -> ",Head->Data);
        Head = Head->Next;
    }while(Tail->Next != Head);

    printf("NULL\n");
}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    if((Head == NULL) && (Tail == NULL))     //Filter : For Empty LL
    {
        return 0;
    }
    do
    {
        iCnt++;
        Head = Head->Next;
    }while(Tail->Next != Head);

    return iCnt;

}

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

    if((*Head == NULL) && (*Tail == NULL))  //LL empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else                                    //LL contain 1 or more than 1 element
    {
        newn->Next = *Head;
        *Head = newn;          
    }
    (*Tail)->Next = *Head ;                  //To maintain circular nature
    
}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

    if((*Head == NULL) && (*Tail == NULL))  //LL empty
    {
        *Head = newn;
        *Tail = newn;
    }
    else                                    //LL contain 1 or more than 1 element
    {
        (*Tail)->Next = newn;
        *Tail = newn;       
    }
    (*Tail)->Next = *Head;                   //To maintain circular nature
    
}



void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int iPos)
{

}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;  
    }
    else
    {
        *Head = (*Head)->Next;
        free((*Tail)->Next);
        (*Tail)->Next = *Head;
    }
    
}
void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;

    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;  
    }
    else
    {
        while (temp->Next != *Tail)
        {
            temp = temp->Next;
        }
        free(*Tail);
        *Tail = temp;
        (*Tail)->Next = *Head;
   
    }
    

}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{

}

int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    int iRet = 0;

    InsertFirst(&first,&last,51);
    InsertFirst(&first,&last,21);
    InsertFirst(&first,&last,11);
    InsertLast(&first,&last,30);
    // InsertAtPos(&first,&last,22,2);
    Display(first,last);
    DeleteFirst(&first,&last);
    Display(first,last);
    DeleteLast(&first,&last);
    Display(first,last);
    iRet = Count(first,last);
    printf("Count of LL elements :%d\n",iRet);

    return 0;
}

