#include<stdio.h>
main()
{
	int i=1,num;
	
	printf("\n\n\t Enter the  number :");
	scanf("%d",&num);
	
	while(i<100)
	{
		printf(" \n %d X %d = %d",num,i,i*num);
		i++;
	}
}
