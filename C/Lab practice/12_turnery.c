#include<stdio.h>
main()
{
	int x,y,z;
	printf("\n\n\t Enter the x :");
	scanf("%d",&x);
	
	printf("\n\n\t Enter the y :");
	scanf("%d",&y);
	
	z=x>y?x:y;
	printf("\n\n\t bigger number is : %d",z);
}
