#include<stdio.h>
main()
{
	
	int i,num;
	printf("\n\n\t Enter a number :");
	scanf("%d",&num);
	i=2;
	printf("\n\n\t This number is even :");
	while(i<num)
	{
		printf(" %d",i);
		i=i+2;
	}
	
	printf("\n\n\t This number is odd :");
	i=2;
	while(i<num)
	{
		printf(" %d",i);
		i=i+2;
	}
}
