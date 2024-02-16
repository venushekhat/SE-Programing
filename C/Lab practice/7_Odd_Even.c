#include<stdio.h>
main()
{
	int i,no;
	
	printf("\n\n Enter a number :",no);
	scanf("%d",& no);
	
	printf("\n\n Even numbers are......");
	i=2;
	while(i<=no)
	{
		printf(" %d",i);
		i=i+2;
	}
	
	printf("\n\nOdd numbers are..........");
	i=1;
	while(i<=no)
	{
		printf(" %d",i);
		i=i+2;
	}
}
