#include<stdio.h>
main()
{
	int number;
	printf("/n/n/t enter the number");
	scanf("%d",&number);
	
	if(number<0)
	{
	
	number=number*-1;
	printf("/n/n/t this number is posetive %d",number);
}
	else
	{
	
	number=number*-1;
	printf("/n/n/tthis number is negative %d",number);
}
}
