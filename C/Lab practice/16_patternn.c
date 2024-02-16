#include<stdio.h>
main()
{
	int i,j,k,n=15;
	for(i=n;i>=1;i--)
	{
		for(k=n-1;k>=i;k--)
		{
			printf(" ");                                                                            
		}
		for(j=i;j>=1;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}
