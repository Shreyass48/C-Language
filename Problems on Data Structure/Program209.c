// Date = 11/11/21
// Doubly linear LL

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;

        *Head = newn;

    }

}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;

    }

}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("|%d| -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
    
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head != NULL)  // ll contain at least 1 node
    {
        *Head = (*Head)->next;
        free(temp);
        if(*Head != NULL)   // for single node
        {
        (*Head)->prev = NULL;   
        }
    }
}

void DeleteFirstX(PPNODE Head)
{
    if(*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free((*Head)->prev);
        (*Head)->prev = NULL;
    }
    
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if ((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while (temp->next != NULL)
        {
           temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
    }
}

void InsertAtPos(PPNODE Head, int no, int iPos)
{
    PNODE temp = *Head;
    PNODE newn= NULL;
    int size = 0, i = 0;

    size = Count(*Head);

    if((iPos < 1) || (iPos > size + 1))
    {
        printf("Invalid condition");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(Head,no);
    }
    else if(iPos == size+1)
    {
        InsertLast(Head,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        //right join
        newn->next = temp->next;
        newn->next->prev = newn;
        //left join
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    PNODE temp = *Head;
    
    int size = 0, i = 0;

    size = Count(*Head);

    if((iPos < 1) || (iPos > size))
    {
        printf("Invalid condition");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(Head);
    }
    else if(iPos == size)
    {
        DeleteLast(Head);
    }
    else
    {
        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;  //set right
        free(temp->next->prev);   //node delete
        temp->next->prev = temp;


    }
    
}

int main()
{
    PNODE first = NULL;
    int iRet = 0, iChoice = 1, val = 0, pos = 0;

    while(iChoice != 0)
    {
        printf("________________________\n");
        printf("Enter your choice :\n");
        printf("1: Insert at first\n");
        printf("2: Insert at last\n");
        printf("3: Insert at pos\n");
        printf("4: Delete first\n");
        printf("5: Delete last\n");
        printf("6: Delete at pos\n");
        printf("7: Display\n");
        printf("8: count node\n");
        printf("0: Terminate app\n");
        printf("________________________\n");
        scanf("%d",&iChoice);

        switch (iChoice)
        {
        case 1:
            printf("enter data: ");
            scanf("%d",&val);
            InsertFirst(&first,val);
            break;
        case 2:
            printf("enter data: ");
            scanf("%d",&val);
            InsertLast(&first,val);
            break;
        case 3:
            printf("enter data: ");
            scanf("%d",&val);
            printf("enter pos:");
            scanf("%d",&pos);
            InsertAtPos(&first,val,pos);
            break;

        case 4:
            DeleteFirst(&first);
            break;

        case 5:
            DeleteLast(&first);
            break;

        case 6:
            printf("enter pos: ");
            scanf("%d",&pos);
            DeleteAtPos(&first,pos);
            break;

        case 7:
            Display(first);
            break;

        case 8:
            iRet = Count(first);
            printf("number of nodes are : %d\n",iRet);
            break;

        case 0:
            printf("Application closed!\n");
            break;
        
        default:
            printf("Enter valid choice");
            break;
        }


    }
    return 0;
}
