#include<stdio.h>
main()
{
	int i;
	printf("\n Even numbers are......");
	for(i=1; i<=30; i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
		}
	}
	
	printf("\n Odd numbers are......");
	   for(i=1; i<=30;  i++)
	{
		if(i%2==1)
		{
			printf("\n%d",i);
		}
	}
}
