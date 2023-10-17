#include <stdio.h>
#include<stdlib.h>
struct student
{
    int data;
    struct student *next;
};
void display_single_traverse(struct student *head)
{
    
    if(head==NULL)
    {
        return;
    }
    else
    {
        display_single_traverse(head->next);
    
    printf("%d",head->data);
    }
}
void display_forward(struct student *head)
{
    struct student *temp1;
     temp1=head;
    while(temp1!=NULL)
    {
        printf("%d",temp1->data);
        temp1=temp1->next;
    }
}
int main()
{
   struct student *head=NULL;
     struct student *temp,*newnode;
   int n,i;
   printf("enter a n value");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       newnode=(struct student*)malloc(sizeof(struct student));
       printf("enter a data");
       scanf("%d",&newnode->data);
       newnode->next=NULL;
       if(head==NULL)
       {
           head=temp=newnode;
       }
       else
       {
           temp->next=newnode;
           temp=newnode;
       }
   }
   display_forward(head);
   printf("\n");
   display_single_traverse(head);
   return 0;
}

