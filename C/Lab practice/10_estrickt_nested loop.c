#include<stdio.h>
main()
{
	int i,j;
	i=1;
	while(i<=50)
	{
		j=1;
		while(j<=50)
		{
			printf(" * ");
			j++;
		}
		i++;
		printf("\n");
	}
}
