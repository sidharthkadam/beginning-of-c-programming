#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c && c==a)
{
printf(" triangle is equilateral");
}
else


if(a==c || b==c || a==b)
{
printf("triangle is isisosceles triangle");
}
else
{
printf("triangle is scalene");
}
getch();

}