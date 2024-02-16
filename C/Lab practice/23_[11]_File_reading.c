#include<stdio.h>
main()
{
	FILE *fptr;
	
	char data[30];
	
	fptr=fopen("shekhat.txt","r");
	
	if(fptr=NULL)
	{
		printf("file is not avaiulabaale");
	}
	else
	{
		while(fgets(data,30,fptr)!=NULL)
		{
			printf("\n\n %s",data);
		}
		fclose(fptr);
	}
}
