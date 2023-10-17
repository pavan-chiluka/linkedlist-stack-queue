#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void display_single_traverse(struct node *head);
void display(struct node *head);
int main()
{
	struct node *head=NULL;
	struct node *temp=NULL;
	struct node *newnode=NULL;
	int n,i;
	printf("enter n value");
	scanf("%d",&n);
        for(i=0;i<n;i++)
	{
		newnode=((struct node*)malloc(sizeof(struct node)));
		printf("enter newnode data");
		scanf("%d",&(newnode->data));
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
display_single_traverse(head);
display(head);
}
void display_single_traverse(struct node *head)
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
void display(struct node *head)
{
	struct node *temp1=head;
	while(temp1!=NULL)
	{
		printf("%d",temp1->data);
		temp1=temp1->next;
	}
}




