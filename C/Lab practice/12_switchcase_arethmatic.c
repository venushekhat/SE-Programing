#include<stdio.h>
main()
{
	int n1,n2;
	char choice;
	
	printf("\n\n\t Input n1 :");
	scanf("%d",&n1);
	
	printf("\n\n\t Input n2 :");
	scanf("%d",&n2);
	
	printf("\n\n\tPress the + to Addtion :");
	printf("\n\n\tPress the - to Subtraction :");
	printf("\n\n\tPress the * to Multiplication :");
	printf("\n\n\tPress the / to Division :");
	
	
	printf("\n\n\t Enter your choice :");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+':printf(" Addtion : %d",(n1+n2));
        		break;
        
        case '-':printf(" Substraction : %d",(n1-n2));
                break;
        
        case '*':printf(" Multiplication : %d",(n1*n2));
                break;
        
        case '/':printf(" Division : %d",(n1/n2));
          		break;
        
        case '%':printf(" Moduler : %d",(n1%n2));
        		break;
        
        default :printf("dont valid number");
        		break;
	}
	
}
