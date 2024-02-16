#include<stdio.h>
main()
{
	int i=0,j=1,k,num;
	
	printf("\n\n Enter the number :");
	scanf("%d",&num);
	
	printf("\n %d %d",i,j);
	
	
	k=i+j;
	while(k<num)
	{
		printf(" %d",k);
		i=j;
		j=k;
		k=i+j;
	}
}
