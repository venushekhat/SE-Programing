#include<stdio.h>
main()
{
	int day;
	
	printf("\n\n\t Enter the day  :  ");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:printf("\n\n\tsunday!!!...");
		break;
		
		case 2:printf("\n\n\tmonday!!!...");
		break;
		
		case 3:printf("\n\n\ttuesday!!!...");
		break;
		
		case 4:printf("\n\n\twednesday!!!...");
		break;
		
		case 5:printf("\n\n\tthrusdat!!!...");
		break;
		
		case 6:printf("\n\n\tfriday!!!...");
		break;
		
		case 7:printf("\n\n\tSaturday!!!...");
		break;
		
		default : printf("\n\n\t Your day is not valid day");
		break;
	}
}
