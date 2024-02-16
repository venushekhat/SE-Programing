#include<stdio.h>
main()
{
	int num;
	printf("\n\n\t Enter the number :");
	scanf("%d",&num);
	
	if(num%2==0)
	goto even;
	
	else
	goto odd;
	
	even:
		printf("\n\n\t this number is even.......");
		exit(0);
		
		odd :
			printf("\n\n\t This number is odd.....................");
			exit(0);
}
