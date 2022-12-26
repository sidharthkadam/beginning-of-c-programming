#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
char ch;
int a[10]={0},val,s;
int top=-1,i;
do
{
clrscr();
printf("\nenter p for push \nenter o for pop\nenter d for display\nenter e for exit");
scanf("%c",&ch);
switch(ch)
{
case'p':
	printf("\nenter amount");
	scanf("%d",&val);
	top=top+1;
	a[top]=val;
	break;
case'e':exit(0);
case'd':for(i=top;i>=0;i--)
	{
	printf("\n%d",a[i]);
	}
	getch();
	break;



case'o':
	top--;
	break;
	}
	}
	while(1);
	getch();
	}