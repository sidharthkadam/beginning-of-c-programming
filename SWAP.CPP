#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;

printf("%d",a);
printf("%d",b);
getch();
}