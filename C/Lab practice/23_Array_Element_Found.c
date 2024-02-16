#include<stdio.h>
main()
{
	int a[5];
	int i,element,flage=0;
	
	for(i=0;i<=5;i++)
	{
		printf("\n\n\tInput Array value :");
		scanf("%d",&a[i]);
	}
	
	printf("\n\n\t.........................");
	
	for(i=0;i<=5;i++)
	{
		printf("\n\n\t Array [%d]: %d",i,a[i]);
	
	}
	printf("\n\n\t The search of element :");
	scanf("%d",&element);
	
	for(i=0;i<=5;i++)
	{
		if(element==a[i])
		{
			flage=1;
		}
	}
	if(flage)
	{
		printf("\n\n\tElement found");
	}
	else
	printf("\n\n\t Element not found");
}
