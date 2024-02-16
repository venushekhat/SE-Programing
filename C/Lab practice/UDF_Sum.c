//no arguement no return//

#include<stdio.h>

void sum(); // declaration

void main()
{
	sum();
}

void sum()
{
	int a,b,c;
	printf("\n\n\t INPUT A:");
	scanf("%d",&a);
	
	printf("\n\n\t INPUT B:");
	scanf("%d",&b);
	
	 c=a+b;
	 printf("\n\n\tTHE VALUE OF C = %d",c);
}
