#include<stdio.h>
main()
{
	int rollno,marks;
	printf("\n\n\t Enter Your rollno :");
	scanf("%d",&rollno);
	
	printf("\n\n\t Enter your marks :");
	scanf("%d",&marks);
	
	if(marks>=70)
	printf("\n\n\t You got distriction..........");
	
	else if(marks>=60)
	printf("\n\n\t You got a exellent...........");
	
	else if(marks>=50)
	printf("\n\n\t You got a best.......");
	
	else
	printf("\n\n\t You are fail........");
}
