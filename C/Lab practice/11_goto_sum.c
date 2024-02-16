#include<stdio.h>
main()

{
	int num, sum=0,i=1;
	input :
		printf("\n\n\t Enter the number :");
		scanf(" %d",&num);
		
		sum=sum+num;
		i++;
		
		if(i<=3)
		goto input;
		
		else
		printf("\n\n\t sum.........%d",sum);
}
