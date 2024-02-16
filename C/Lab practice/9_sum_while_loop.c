#include<stdio.h>
main()
{
	int i,num,sum;
	
	printf("\n\n\t Enter the number :");
	scanf("%d",&num);
	
	printf("\n\n\t Numbers are");
	
	i=1;
	while(i<=num)
	{
		
		sum=sum+i;
		printf(" %d +",i);
		
		i=i+1;
	}
	
printf("\n\n\t sum of numbers: %d",sum);
}
