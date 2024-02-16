#include<stdio.h>
#include<string.h>
main()
{
	char str1[20];
	
	printf("\n\n\tInput string :");
	scanf("%s",str1);
	printf("\n\n\t Case transfer to strupr() : %s",strupr(str1));
	
	printf("\n\n\t Case change to strlwr() : %s",strlwr(str1));
}



