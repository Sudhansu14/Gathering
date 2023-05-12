#include<stdio.h>

sum(int marks[])
{
	int i,sum=0;
	
	for(i=0;i<=4;i++)
	{
		sum=sum+marks[i];
	}
	printf("sum=%d\n",sum);
}

main()
{
	int arr[]={54,96,37,98,95};	
	sum(arr);
}
