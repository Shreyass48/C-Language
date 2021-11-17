//Date : 9/11/21 
//Single linear Linked List

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

   // Step 1
   newn = (PNODE)malloc(sizeof(NODE)); 

   // Step 2
   newn->data = no;
   newn->next = NULL;

   // Step 3
   if(*Head == NULL) //indicate LL is empty.
   {
       *Head = newn;  //set address to first(master la first stu ch address sngnr)
   }
   else             //LL contain atleast 1 node.
   {
      newn->next = *Head;
      *Head = newn; 
   }


}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

   // Step 1
   newn = (PNODE)malloc(sizeof(NODE)); 

   // Step 2
   newn->data = no;
   newn->next = NULL;

    // Step 3
   if(*Head == NULL) //indicate LL is empty.
   {
       *Head = newn;  //set address to first(master la first stu ch address sngnr)
   }
   else             //LL contain atleast 1 node.
   {
       while(temp -> next != NULL)
       {
           temp = temp -> next;
       }
       temp->next = newn;
   }
   
}

void Display(PNODE Head)
{
    printf("Data from Linked List:\n");
    while(Head != NULL)
    {
        printf("%d\t",Head->data);
        Head = Head -> next;
    }
    printf("\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head; //first node = temp
    
    if(*Head != NULL)  //Filter : if LL contains at least one node
    {
       *Head = (*Head) -> next;
       free(temp);
    }

}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head == NULL) //LL empty
    {
        return;
    }
    else if((*Head) -> next == NULL) //LL contain 1 node.
    {
        free(*Head);
        *Head = NULL;    //tell to teacher no one on ground(first = null)
    }
    else                //LL contain more than 1 node
    {
  
        while(temp->next->next != NULL)
        {
            temp = temp -> next; 
        }

        free(temp->next);
        temp -> next = NULL;

    }
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 101); 
    InsertFirst(&first, 51);     // InserFirst(50(Address of first), 51);
    InsertFirst(&first, 21);     // InserFirst(50, 51);
    InsertFirst(&first, 11);     // InserFirst(50, 51);

    InsertLast(&first,111);

    Display(first); // Display(100);
    iRet = Count(first);
    printf("Linked list contains %d elements\n", iRet);

    DeleteFirst(&first);
    Display(first);
    iRet = Count(first);
    printf("Linked list contains %d elements\n", iRet);

    DeleteLast(&first);
    Display(first);
    iRet = Count(first);
    printf("Linked list contains %d elements\n", iRet);

    return 0;
}





/*
    PROTOTYPES:
    
    void InsertFirst(PPNODE Head, int no)
    void InsertLast(PPNODE Head, int no)
    void InsertAtPost(PPNODE Head, int no, int pos)
    steps to insert function:
    1.allocate memory
    2.initilize node
    3.insert the node

    void DeleteFirst(PPNODE Head)
    void DeleteLast(PPNODE Head)
    void DeleteAtPost(PPNODE Head, int pos)

    void Display(PNODE Head)
    int Count(PNODE Head)
    
*/
