#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<alloc.h>
struct node
	   {
	   int  data;
	   struct node *next;
	   };

struct node *start=NULL;
void create(void);
void insert(void);
void display(void);
void max(void);
void delend(void);


void main()
{
int ch;
do
{
clrscr();

printf("Enter 1 for creation");
printf("\nEnter 2 for insert");
printf("\nEnter 3 for display");
printf("\nEnter 4 for finding max");
printf("\nEnter 5 for deleting");
printf("\nEnter 6 for Exit");
scanf("%d",&ch);
switch(ch)
{
	case 1:create();break;
	case 2:insert();break;
	case 3:display();break;
	case 4:max();break;
	case 5:delend();break;
	case 6:exit(0);
}
getch();
}while(1);
}

void create(void)
{
struct node *head;
head=(struct node*)malloc(sizeof(struct node*));
if(head==NULL)
{
printf("No Memory Allocation");
}
else
{
printf("Enter data");
scanf("%d",&head->data);
head->next=NULL;
start=head;
}
}
void insert(void)
{

 struct node*start1;
 start1=start;
 while(start1->next!=NULL)
 {
 start1=start1->next;
 }
  struct node *head;
head=(struct node*)malloc(sizeof(struct node*));
if(head==NULL)
{
printf("No Memory Allocation");
}
else
{
printf("Enter data");
scanf("%d",&head->data);
head->next=NULL;
start1->next=head;
}
}
void display(void)
{
struct node*start1;
start1=start;
while(start1!=NULL)
{
printf("\n%d",start1->data);
start1=start1->next;
}
}
void max()
{
struct node*temp;
temp=start;
int max=0;
while(temp!=NULL)
{
if(temp->data>=max)
{
max=temp->data;
}
temp=temp->next;
}
printf("%d",max);
}
void delend(void)
{
struct node *temp, *temp2,*temp1;
temp1=start;

while(temp1->next->next!=NULL)
{
temp1=temp1->next;
}

temp2=temp1->next;
free(temp2);
temp1->next=NULL;

}

