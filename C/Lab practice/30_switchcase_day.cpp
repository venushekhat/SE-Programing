#include<stdio.h>
main()
{
	int day;
	
	
	printf("\n\n\t Enter the day : ");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1: printf("\n\n\tToday is sunday");
		break;
		
		case 2: printf("\n\n\tToday is monday");
		break;
		
		case 3: printf("\n\n\tToday is tuesday");
		break;
		
		case 4: printf("\n\n\tToday is wednesday");
		break;
		
		case 5: printf("\n\n\tToday is thrusday");
		break;
		
		case 6: printf("\n\n\tToday is friday");
		break;
		
		case 7: printf("\n\n\tToday is saturday");
		break;
		
		default : printf("\n\n\ttoday is not valid day");
		break;
	}
}
