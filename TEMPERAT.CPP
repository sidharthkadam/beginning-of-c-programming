#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
float c,f;
clrscr();
printf("enter a temperature to convert in farhenheit");
scanf("%f",&c);
f=c*9/5+32;
printf("the temperature in farenheit is: %f",f);
if (f==108)
{
printf("\n The person has fever");
}
if(f<85)
{
printf("\n The temperature is low");
}
if(f<108 && f>85)
{
printf("\n temperature is normal");
}
if(f>108)
{
printf("\n prepare bundi for teravi");
}
getch();
}

