#include<stdio.h>
main()
{
	int i,no,sum;
	
	printf("\nEnter the number :");
	scanf("%d",&no);
	
	printf("\n\nnumbers are.....");
	i=1;
	
	while(i<=no)
	{
		printf(" %d + ",i);
		sum=sum+i;
		i=i+1;
	}
	printf("They sum are..............%d",sum);
}
