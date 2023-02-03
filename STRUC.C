#include<stdio.h>
#include<conio.h>
struct ndy
{
int roll;
char name[20];
int marks;
};
typedef struct ndy student;
void main()
{
student st1[10];
int i,j,max=0;
clrscr();
for(i=0;i<3;i++)
{
printf("enter roll no:");
scanf("%d",&st1[i].roll);
printf("enter name:");
scanf("%s",&st1[i].name);
printf("enter marks:");
scanf("%d",&st1[i].marks);
}
clrscr();
printf("the details of student are") ;
for(i=0;i<3;i++)
{
printf("\nroll no :%d",st1[i].roll);
printf("\nname :%s",st1[i].name);
printf("\nmarks :%d",st1[i].marks);
}
for(i=0;i<=3;i++)
{
if (max<st1[i].marks)
{
max=st1[i].marks;
j=i;
}
}
printf("\nhighest marks are %d",max);
printf("\nhigest marks are obtained by mr/mrs %s",st1[j].name);
getch();
}
