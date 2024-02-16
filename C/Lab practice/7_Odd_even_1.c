#include<stdio.h>
main()
{
	
	int i,num;
	printf("\n\n Enter the number........");
	scanf("%d",&num);
	
	printf("Even numbers are::");
	i=2;
	while(i<=num)
	{
		printf(" %d",i);
		i=i+2;
	}
	
	printf("\n\n Odd numbers are.....");
	i=1;
while(i<=num)
	{
		printf(" %d",i);
		i=i+2;
	}
}
