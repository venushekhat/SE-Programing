#include<stdio.h>
main()
{
	int n1,n2;
	char choice;
	
	printf("Input n1:");
	scanf("%d",&n1);
	
	printf("Input n2:");
	scanf("%d",&n2);
	
	printf("\n\n\tArthmatic oparation.....");
	printf("\n\n\tpress + to addition");
	printf("\n\n\t press - to substraction");
	printf("\n\n\t press * to multiplication");
	printf("\n\n\t press / to divide");
	
	printf("\n\n\t Enter your choice");
	scanf("%c",choice);
	
	switch(choice)
	{
		case'+':printf("\n\n\tpress + to addition :",(n1+n2));
		break;
		
		case'-':printf("\n\n\tpress - to substraction :",(n1-n2));
		break;
		
		case'*':printf("\n\n\tpress - to mutiplication :",(n1*n2));
		break;
		
		case'/':printf("\n\n\tpress - to division :",(n1/n2));
		break;
		
		default : printf("not valid your choice");
		break;
	}
}
