#include<stdio.h>
#include<stdlib.h>
struct student
{
    int data;
    struct student *next;
};
struct student *head=NULL;
int push(int value)
{
    struct student *newnode;
    newnode=(struct student*)malloc(sizeof(struct student));
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}
int display()
{
    struct student *temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void pop()
{
    if(head==NULL)
    {
        printf("stack is empty");
    }
    else{
    struct student *temp1;
    temp1=head;
    printf("the pop data %d",head->data);
    head=head->next;
    free(temp1);
}
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    display();
    pop();
    pop();
}

