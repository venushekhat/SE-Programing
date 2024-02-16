#include<stdio.h>
main()
{
	int n1,n2,choice;
	
	printf("\n\n\t Input n1 :");
	scanf("\n\n\t %d",&n1);
	
	printf("\n\n\t Input n2 :");
	scanf("\n\n\t %d",&n2);
	
	printf("\n\n\t Addition.................... :");
	printf("\n\n\t Substraction...................:");
	printf("\n\n\t Multiplication................ :");
	printf("\n\n\t Division.............. :");
	printf("\n\n\t Moduler............");
	
	printf("\n\n\t Enter Your Choice :");
	scanf("\n\n\t %d",&choice);
	
	switch(choice)
	 {
	 	case 1:printf("\n\n\t Answer for the Addtion is :%d",(n1+n2));
	 	break;
	 	
	 	case 2:printf("\n\n\t Answer for the Subtraction is :%d",(n1-n2));
	 	break;
	 	
	 	case 3:printf("\n\n\t Answer for the  Multiplication is :%d",(n1*n2));
	 	break;
	 	
	 	case 4:printf("\n\n\t Answer for the Division is :%d",(n1/n2));
	 	break;
	 	
	 	case 5:printf("\n\n\t Answer for the Moduler is :%d",(n1%n2));
	 	break;
	 	
	 	default : printf("you got made a wrong choice");
	 }
}
