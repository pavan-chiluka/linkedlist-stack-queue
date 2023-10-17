#include<stdio.h>
#include<stdlib.h>
struct student
{
    int data;
    struct student *next;
};
struct student *front=NULL;
struct student *rear=NULL;
void eneq(int value)
{
    struct student *newnode;
    newnode=(struct student*)malloc(sizeof(struct student));
    newnode->data=value;
    newnode->next=NULL;
    if(front==NULL)
    {
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
int display()
{
    struct student *temp;
    temp=front;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int deque()
{
    struct student *temp1;
    temp1=front;
    printf(" the data dequed %d",front->data);
    front=front->next;
    free(temp1);
}
int main()
{
    eneq(1);
    eneq(2);
    eneq(3);
    eneq(4);
    eneq(5);
    display();
    deque();
    deque();
}


