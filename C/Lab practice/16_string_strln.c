#include<stdio.h>
#include<string.h>
main()
{
	int len;
	char str[12];
	
	printf("\n\n\tInput string :");
	gets(str);
	
	len=strlen(str);
	
	printf("\n\n\tString :");
	puts(str);
	
	printf("\n\n\t The len of string : %d ",len);
}
