#include<stdio.h>
main()
{
int n=15;
int i,j;

for(i=1;i<=n;i++)
{
	for(j=n;j>=1;j--)
	{
		if(i>=j)
		printf("* ");
		else
		printf(" ");
	}
	printf("\n");
}

}
