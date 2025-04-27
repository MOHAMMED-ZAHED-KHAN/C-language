#include<stdio.h>
int main()
{
	int i,num,count=0;
	printf("enter num:\n");
	scanf("%d",&num);
	for (i=2;i<num+1;i++)
	{
		if (num%i==0)
		{
			count++;
		}
	}
	if (count==1)
	{
		printf("it is a prime number\n");
	}
	else
	{
		printf("it is not a prime number\n");
	}
	return 0;
}
