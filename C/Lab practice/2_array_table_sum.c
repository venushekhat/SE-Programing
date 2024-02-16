#include<stdio.h>
main()
{
	int i,j,a1[3][3],a2[3][3],sum[3][3];
	printf("\n\n\t _______________________Array1______________________");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\n\t Input element [%d] [%d] :" ,i,j);
			scanf("%d",&a1[i][j]);
		}
		printf("\n");
	}
	
		printf("\n\n\t _______________________Array2______________________");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\n\t Input element [%d] [%d] :",i,j);
			scanf("%d",&a2[i][j]);
		}
		printf("\n");
	}
	

			for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a1[i][j]+a2[i][j];
	
		} 
	}
	
		printf("\n..............Addition of two array............\n");
	  for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",sum[i][j]);
	
		} 
		printf("\n");
	}
	}

