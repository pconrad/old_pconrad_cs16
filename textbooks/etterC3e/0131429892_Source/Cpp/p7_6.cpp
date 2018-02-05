// p7_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


/*-------------------------------------------------------------*/
/*  Program chapter7_6                                         */
/*                                                             */
/*  This program tests the function to insert and delete       */
/*  items in a linked list.                                    */  

#include <stdio.h>
#include <stdlib.h>

/*  Define structure to represent a node in a linked list.  */		
struct node
{
   int data;
   struct node *link;
};

int main(void)
{
   /*  Declare variables and function prototypes.  */
   int k=0, old, value;
   struct node *head, *next, *previous, *nw, **ptr_to_head=&head;
   void insert(struct node **ptr_to_head, struct node *nw); 
   void remove(struct node **ptr_to_head, int n);  
   int empty(struct node *head);  
   void print_list(struct node *head);

   
   /*  Generate and print a linked list with five nodes.  */
   head = (struct node *)malloc(sizeof(struct node));
   next = head;
   for (k=1; k<=5; k++)
   {
      next->data = k*5;
      next->link = (struct node *)malloc(sizeof(struct node));
      previous = next;
      next = next->link;
   }
   previous->link = NULL;
   print_list(head);

   /*  Allow user to insert or delete nodes in the list. */ 
   while (k != 2)
   {
      printf("Enter 0 to delete node, 1 to add node, 2 to quit. \n");
      scanf("%d",&k);
      if (k == 0)
      {  
         printf("Enter data value to delete: \n");
         scanf("%d",&old);
         remove(ptr_to_head,old);
         print_list(head);
      }
      else
         if (k == 1)
         {
            printf("Enter data value to add: \n");
            scanf("%d",&value);
            nw = (struct node *)malloc(sizeof(struct node));
            nw->data = value;
            nw->link = NULL;
            insert(ptr_to_head,nw);  
            print_list(head);
         } 
   }   
 
   /*  Exit program.  */
   return 0;
}
/*-------------------------------------------------------------*/
/*  This function returns a value of one if the linked list    */
/*  is empty.                                                  */

int empty(struct node *head)
{
   /*  Declare variables.  */
   int k=0;

   /*  Determine if the list is empty.  */
   if (head == NULL)
      k = 1;

   /*  Return integer.  */
   return k;
}
/*-------------------------------------------------------------*/
/*  This function prints a linked list                         */

void print_list(struct node *head)
{
   /*  Declare variables.  */
   struct node *next;

   /*  Print linked list.  */
   if (empty(head))
      printf("Empty list \n");
   else
   {
      printf("List Values: \n");
      next = head;
      while (next->link != NULL)
      {
         printf("%d \n",next->data);
         next = next->link;
      }
      printf("%d \n",next->data);
   }

   /*  Void return.  */
   return;
}
/*-------------------------------------------------------------*/
/*  This function inserts a new node in a linked list.         */ 

void insert(struct node **ptr_to_head, struct node *nw)
{
   struct node **next;

   if (empty(*ptr_to_head))
      *ptr_to_head = nw;
   else
   {
      next = ptr_to_head;
      while ( ((*next)->data < nw->data) && 
              ((*next)->link != NULL) )      
         next = &(*next)->link;

      if ((*next)->data == nw->data)
         printf("Node already in list. \n");
      else
         if ((*next)->data < nw->data)
            (*next)->link = nw;
         else
         {
            nw->link = *next;
            *next = nw;
         }
   }

   return; 
} 
/*-------------------------------------------------------------*/
/*  This function deletes a node from a linked list.         */

void remove(struct node **ptr_to_head, int old)
{
   /*  Declare variables and function prototypes.  */
   struct node *head, *next, *last, *hold;

   /*  Check for delete to empty list.  */
   head = *ptr_to_head;
   if (empty(head))
      printf("Empty list \n");
   else
   /*  Check for deletion of first node.  */
   {
      if (head->data == old)
      {
         /*  Delete first node.  */
         hold = head;
         *ptr_to_head = head->link;
         free(hold);
      }
      else
      /*  Traverse list to find node old.  */
      {
         next = head->link;
         last = head;
         while ((next->data < old) &&
                (next->link != NULL))  
         {
            last = next;
            next = next->link;
         }
         /*  Delete node if found.  */
         if (next->data == old)
         {
            hold = next;
            last->link = next->link;
            free(hold);
         }
         else
            printf("Value %d not in list. \n",old);
      }
   }
     
   /*  Void return.  */
   return;
}
/*-------------------------------------------------------------*/


