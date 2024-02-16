#include<stdio.h>
main()
{
	int rem,n;
	
	printf("\n enter the number :\n");
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		printf(" %d",rem);
		n=n/10;
	}
}
