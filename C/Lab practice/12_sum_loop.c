#include<stdio.h>
main()
{
	int sum,i,no;
	
	printf("\n\n\t Enter the number :");
	scanf("%d",&no);
	
	printf("\n\n\t They numbers are.......");
	
	while(i<=no)

	{
		printf(" %d +",i);
			sum=sum+1;
		i++;
	}
	printtf("\n\n\t They sum are : %d",sum);
}
