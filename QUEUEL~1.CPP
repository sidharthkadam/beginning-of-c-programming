#include<stdio.h>   
#include<stdlib.h>
#include <conio.h>
#include<malloc.h>
struct node   
{  
    int data;   
    struct node *next;  
};  
struct node *front;  
struct node *rear;   
void enqueue();
void dequeue();
void display();  
void main()
{  
    int choice;   
    while(choice != 4)   
    {     
       // printf("\n*************************Main Menu*****************************\n");
       // printf("\n=================================================================\n");
	printf("\n1.Enueue insert an element\n2.Dequeue delete an element\n3.Display the queue\n4.Exit\n");
	printf("\nEnter your choice ?");
	scanf("%d",& choice);
	clrscr();
	switch(choice)
	{
	    case 1:
			enqueue();
			break;
            case 2:  
			dequeue();
			break;
            case 3:  
			display();
			break;
            case 4:  
			exit(0);
			break;
            default:   
			printf("\nEnter valid choice??\n");
        }  
    }  
}  
void enqueue()
{  
    struct node *temp;
    int item;   
      
    temp = (struct node *) malloc (sizeof(struct node));
    if(temp == NULL)
    {  
	printf("\nOVERFLOW\n");
        return;  
    }  
    else  
    {   
        printf("\nEnter value?\n");  
	scanf("%d",&temp->data);

        if(front == NULL)  
        {  
	    front = temp;
	    rear = temp;
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {  
	    rear -> next = temp;
	    rear = temp;
            rear->next = NULL;  
        }  
    }  
}     
void dequeue ()
{  
    struct node *temp;
    if(front == NULL)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
    }  
    else   
    {  
	temp = front;
	front = front -> next;
	free(temp);
    }  
}  
void display()  
{  
    struct node *ptr;  
    ptr = front;      
    if(front == NULL)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        while(ptr != NULL)   
        {  
            printf("\n%d\n",ptr -> data);  
            ptr = ptr -> next;  
        }  
    }  
}  