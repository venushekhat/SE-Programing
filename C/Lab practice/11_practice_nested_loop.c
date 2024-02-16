#include<stdio.h>
main()
{
	int i,j,n;
	i=1;
	n=1;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			printf(" %d",n);
			n++;
			j++;
		}
		i++;
		printf("\n");
	}
}
