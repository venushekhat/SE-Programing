//2   4  6  8 10
//12 14 16 18 20
//22 24 26 28 30
//32 34 36 38 40
//42 44 46 48 50


#include<stdio.h>
main()
{
int i,j,n=5,x=2;

for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		printf("  %d",x);
		x+=2;
	}
	printf("\n");
}

}
