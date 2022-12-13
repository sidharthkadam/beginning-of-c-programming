#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i=0,j=0,k;
int A[5]={2,4,9,11,21};
int B[7]={1,2,3,5,7,8,10};
int C[12];
for(k=0;k<=11;k++)
{
if(A[i]>B[j] && j<7)
{
C[k]=B[j];
j++;
}
else
{
C[k]=A[i];
i++;

}
}
printf("The merged sorted array is:");
for(k=0;k<=11;k++)
{

printf("\n%d",C[k]);
}
getch();
}