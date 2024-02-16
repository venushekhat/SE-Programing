#include<stdio.h>
main()
{
	int i,j,k;
	char ch='A';
	for(i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c ",ch);
			ch++;
		}
		printf("\n");
	}
}
