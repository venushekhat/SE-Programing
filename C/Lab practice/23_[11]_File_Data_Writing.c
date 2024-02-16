#include<stdio.h>
main()
{
  FILE *fptr;
  char data[30]="this is shekhat venu";
  fptr=fopen("maravaniya.txt","w");
  
  if(fptr==NULL)
  {
  	printf("this file is not available");
  }
  else
  {
  	if(fptr!=EOF)
  	fputs(data,fptr);
  }
}
