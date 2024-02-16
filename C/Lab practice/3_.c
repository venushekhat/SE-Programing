#include<stdio.h>
main()
{
	int n1,n2,choice;	
	
	printf("\n\n\tArithmatic opration............");
	printf("\n\n\tAddtion....");
	printf("\n\n\tSubstraction....");
	printf("\n\n\tMultiplication...");
	printf("\n\n\tDivision....");
	
	printf("\n\n\t Enter your choice....");
	scanf("%d",&choice);
	
	
	printf("\n\n\t Enter the n1 : ");
	scanf("%d",&n1);
	
	printf("\n\n\t Enter the n2 : ");
	scanf("%d",&n2);

switch(choice)
	{
		case 1:
			printf("\n\n\tAddtion ans is %d",(n1+n2));
			break;
			
			case 2:
			printf("\n\n\tSubstraction ans is %d",(n1-n2));
			break;
				
			case 3:
			printf("\n\n\tMultiplication ans is %d",(n1*n2));
					
		   case 4:
		   printf("\n\n\tDivision ans is %d",(n1/n2));
						
		   default:
		   printf("\n\n\tyour choice is not valid");
	}
	
}
