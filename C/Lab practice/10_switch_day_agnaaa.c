#include<stdio.h>
main()
{
	int day;
	printf("\n\n\tEnter the number :");
	scanf("%d",&day);
	switch(day)
	{
		    case 1 :printf("\n\n\tSunday...!");
	    	break;
		    case 2 :printf("\n\n\tMonday...!");
	     	break;
		    case 3 :printf("\n\n\tTuesday...!");
		    break;
		    case 4 :printf("\n\n\tWednesday...!");
		    break;
		    case 5 :printf("\n\n\tTuesday...!");
		    break;
		    case 6 :printf("\n\n\tFriday...!");
		    break;
		    case 7 :printf("Saturday...!");
		    break;
		    default : printf("\n\n\tnot valid day............");
	        break;
	}
	

	
}
