#include<stdio.h>
main()
{
	int i,j;
	i=1;
	
	while(i<=20)
	{
		j=1;
		while(j<=i)
		{
			printf(" * ");
			
			j++;
			
		}
		printf("\n");
		i++;
	}
}
