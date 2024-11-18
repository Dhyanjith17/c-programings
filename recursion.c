#include<stdio.h>
 int sum(int k)
{
	if(k>0)
	{
		return k + sum(k-1);
	}
	
	else
	{
		return 0;
	}	
}
int main()
{
	int n,result;
	printf("enter n :");
	scanf("%d",&n);
	sum(n);
	result = sum(n);
	printf("sum of first %d numbers = %d",n,result);
	return 0;
}
