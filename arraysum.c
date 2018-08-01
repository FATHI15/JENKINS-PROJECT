#include<stdio.h>
void sum(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
       
		printf("\nsum is %d",sum);
	
}
