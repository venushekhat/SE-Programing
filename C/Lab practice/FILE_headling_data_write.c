#include<stdio.h>

FILE *fptr;

char data[30]="This language is c";

 fptr=fopen("venu.txt","w");

if(fptr==NULL)
{
	printf("\n\n\t This file is not available...");
}

else
{
	if(fptr!=EOF)
	{
	
	fputs(data,fptr);
	
}
}


