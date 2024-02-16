#include<stdio.h>
main()
{
	int x, y, z;
	
	printf("\n\n\t input the number A:");
	scanf("%d",&x);
	
	printf("\n\n\t input the number B:");
	scanf("%d",&y);
     
     z=x>y?x:y;
     printf("\n\n\t bigger nuumber is:%d",z);
}
