

#include<stdio.h>
main()
{
	int  rollno, marks;
	printf("\n\n\tEnter your roll no:");
	scanf("%d",&rollno);
	
	printf("\n\n\tEnter the marks :");
	scanf("%d",&marks);
	
	if(marks>=70)
	printf("\n\n\t you are pass with discriction...");
	
	else if(marks>=60)
		printf("\n\n\t you are pass with exellent...");
	
	else if(marks>=40)
	printf("\n\n\t you are pass with first class...");
		
    else
	printf("\n\n\t you are pass with second...");
		
}


