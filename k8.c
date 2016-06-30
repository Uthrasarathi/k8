#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,i;
clrscr();
printf("enter the number\n");
scanf("%d",&sum);
for(i=1;i<=10;i++);
{
sum=sum+i;
}
printf("sum %d",sum);
getch();
}
