#include<stdio.h>

void sum();

void main()
{
	sum();
}

void sum()
{
	int a,b,c;
	printf("\n\n\t Input A:");
	scanf("%d",&a);
	
	printf("\n\n\t Input B:");
	scanf("%d",&b);
	
	c=a+b;
	
	printf("\n\n\t sum = %d",c);
}
