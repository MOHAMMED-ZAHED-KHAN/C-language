#include<stdio.h>
int main()
{
	int n;
	do
	{
		printf("enter a number:");
		scanf("%d",&n);
		break;
	}
	while(n>0);
	{
		if(n%2==0)
		{
			printf("even");
		}
		else
		{
			printf("odd");
		}
	}
	return 0;
}
