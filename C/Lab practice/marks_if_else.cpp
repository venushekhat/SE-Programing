#include<stdio.h>
main()\
{
  int marks;
	
	printf("\n\n\t Enter the Marks :");
	scanf("%d",&marks);
	
	if(marks>=80)
	printf("\n\n\tyou are the best");
	
	else if(marks>=60)
	printf("\n\n\tyou are not best");
	
	else if(marks>=40)
	printf("you are second class");
	
	else if(marks>=20)
	printf("you are lazy");
	
	else
	printf("\n\n\tyou are failed");
}
