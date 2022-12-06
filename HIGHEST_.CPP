#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter 3 no");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b && a>c)
{
printf("%d",a);
}
if(b>a && b>c)
{
printf("%d",b);
}
if(c>b && c>a)
{
printf("%d",c);
}
getch();
}