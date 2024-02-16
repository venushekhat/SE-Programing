#include<stdio.h>
main()
{
	int i;
for(i=1;i<=20;i++)
{
	if(i==8 || i==9 || i==10)
	{
		continue;
	}
	printf(" %d",i);
}
}
