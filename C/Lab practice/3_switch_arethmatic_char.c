#include<stdio.h>
main()
{
	int n1,n2;
	char choice;
	
	printf("Arthmatic oparation......");
	printf("\n\n\t Press + to addtion...");
	printf("\n\n\t Press - to subsraction...");
	printf("\n\n\t Press * to Multiplication....");
	printf("\n\n\t Press / to division...");
	
   printf("\n\n\t Enter your choice..");
	scanf("%c",&choice);
	
	printf("\n\n\t Input n1:");
	scanf("%d",&n1);
	
	printf("\n\n\t Input n2:");
	scanf("%d",&n2);
	
		switch(choice)
	
	{
		case '+':printf("\n\n\t Addtion : %d",(n1+n2));
        break;
        
        case '-':printf("\n\n\tSubstraction : %d",(n1-n2));
        break;
        
        case '*':printf("\n\n\tMultiplication : %d",(n1*n2));
        break;
        
        case '/':printf("\n\n\tDivision : %d",(n1/n2));
        break;
        
        case '%':printf("\n\n\tModuler :",(n1%n2));
        break;
        
        default :printf("dont valid number");
        break;
	}
	
}
