#include<stdio.h>
int main()
{
	int i,j,k=0;
	
	for(i=1;i<=10;i++)
	{
		for(k=9;k>=i;k--)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
