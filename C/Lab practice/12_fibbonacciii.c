#include<stdio.h>
main()
{
	int i=0,j=1,k,no;
	
	printf("\n\n\t Enter the number :");
	scanf("%d",&no);
	
	printf("%d %d",i,j);
	
	k=i+j;
	while(k<no)
	{
		printf(" %d",k);
		i=j;
		j=k;
		k=i+j;
	}
}
