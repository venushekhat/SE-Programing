#include<stdio.h>
main()
{
	int recharge_value,plan;
	printf("\n\n\t Enter your plan:");
	scanf("%d",&plan);
	
	if(plan>399)
	{
	
	printf("\n\n\t you got a cashback..");
    }
	else
	{
	
	printf("\n\n\t you are not aligible for cashback..");
    }
}
