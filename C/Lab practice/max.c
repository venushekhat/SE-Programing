#include<stdio.h>
main()
{
	int a[20],size,max=0;
	
	printf("\n\n enter the size od array:");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\n enter the value of array [%d]: ",i);
		scanf("%d",&a[i]);
	}
}
