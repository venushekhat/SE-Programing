#include<stdio.h>

void sub();

void main()
{
    sub();
}

void sub()
{
int a,b,c;

printf("\n\n\t Input A :");
scanf("%d",&a);

printf("\n\n\t Input B :");
scanf("%d",&b);

c=a+b;
printf("The sum of values = %d ",c);
}
