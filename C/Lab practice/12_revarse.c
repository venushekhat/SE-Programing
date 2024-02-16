#include<stdio.h>
main()
{
	int rem,num;
	
	printf("\n\n\t Enter the number :");
	scanf("%d",&num);
	
	while(num>0)
{
	rem=num%10;
	printf("%d",rem);
	num=num/10;
}
}
