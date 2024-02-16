#include<stdio.h>
main()
{

FILE *fptr;

fptr=fopen("myfirstfile.txt","w");

if(fptr==NULL)
{
	printf("this file is not available");
}
}

