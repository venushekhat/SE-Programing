#include<stdio.h>
main()
{
	int n1,n2;
	
	printf("\n\n\t Enter the first digit :");
	scanf("%d",&n1);
	
	printf("\n\n\t Enter the secound digit :");
	scanf("%d",&n2);
	
	if(!(n1>10 && n2>10))
	printf("\n\n\t Both number are greatar than ten");
	
	else
	printf("\n\n\t Both number are lessthan ten");
	
}
