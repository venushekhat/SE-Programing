#include<stdio.h>
main()
{
    int i,num;
    
    printf("\n\n Entter a number :");
    scanf("%d",&num);
    
    printf("\n\n\t Even numbers are........");
    i=2;
    while(i<=num)
    {
    	printf("  %d",i);
    	i=i+2;
	}
	
	printf("\n\n\t Odd numbers are............");
	i=1;
	while(i<=num)
	{
		printf("  %d",i);
		i=i+2;
	}
}
