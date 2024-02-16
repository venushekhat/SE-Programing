#include<stdio.h>
main()
{
	int sum,i,num;
	
	printf("\n\n\t Enter the number:");
	scanf("%d",&num);
	
printf("\n\n\t  numbers are:");
i=1;
while(i<=num)
{
	printf("%d +",i);
	sum=sum+1;
	
	i=i+1;
}
	
	printf("sum of all numbers: %d",sum);
}


