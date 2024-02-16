#include<stdio.h>
main()
{
	int a[5]={10,20,30,40,50};
	int i,sum=0;
	
	for(i=0;i<=4;i++)
	{
		
		printf("\n\n\t a[%d] :",i);
		scanf("%d",&a[i]);
		
		sum=sum+a[i];
	}
	printf("\n\n\t.....................................");
	printf("\n\n\tThe sum off numbers.... %d",sum);
}
