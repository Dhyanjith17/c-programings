#include<stdio.h>
 int fact(int k)
{
	if(k>0)
	{
		return k*fact(k-1);
	}
	
	else
	{
		return 1;
	}	
}
int main()
{
	int n,factorial;
	printf("enter n :");
	scanf("%d",&n);
	fact(n);
	factorial= fact(n);
	printf("fact of first %d numbers = %d",n,factorial);
	return 0;
}
