#include<stdio.h>
main()
{
	int max=1,i,num;
	int arr[7]={12,34,655,34,66,33,23};
	for(i=0;i<=7;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("%d",max);
}
