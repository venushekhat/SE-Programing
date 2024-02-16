#include<stdio.h>
main()
{
	int i=1,sum=0,num;
	input:
	
	printf("\n\n\t Enter the number :");
	scanf("%d",&num);
	
	sum=sum+num;
	i++;
	
	if(i<=5)
	goto input;
	
	else
	printf("\n\n\t They sum are :%d",sum);
	
}
