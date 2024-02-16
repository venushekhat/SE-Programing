#include<stdio.h>
main()
{
	int n1,n2,choice;
	
	printf("\n\n\t Arethmatic Oparation.......");
	printf("\n\n\t Addtion.....");
	printf("\n\n\t Substraction.....");
	printf("\n\n\t Multiplication........");
	printf("\n\n\t Division......");
	
	printf("\n\n\t Enter your choice....");
	scanf("%d",&choice);
	
	printf("\n\n\t Input n1 :");
	scanf("%d",&n1);
	
	printf("\n\n\t Input n2 :");
	scanf("%d",&n2);
	
	switch(choice)
	{
		case 1: printf("\n\n\t Addition ans is %d",(n1+n2));
		break;
		
		case 2: printf("\n\n\t Subsraction ans is %d",(n1-n2));
		break;
		
		case 3: printf("\n\n\t Multiplication ans is %d",(n1*n2));
		break;
		
		case 4: printf("\n\n\t Division ans is %d",(n1/n2));
		break;
		
		default :printf("\n\n\tyour choice is not valid..........");
	    break;
	}
}
