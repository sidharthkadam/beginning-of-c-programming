#include<stdio.h>
#include<conio.h>
void main ()
{
int a,b;
clrscr();
scanf("%d",&a);
b=a%2;
if(b==0)
{
printf("even");
}
else
{
printf("odd");
}
getch();
}