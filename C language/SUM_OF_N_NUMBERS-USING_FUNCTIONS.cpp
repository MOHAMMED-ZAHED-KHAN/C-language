#include<stdio.h>
void sumon(int);
void sumon(int num)
{
	int i,sum=0;
	for(i=1;i<=num;i++)
	{
		sum=sum+i;
	}
	printf("sum of n numbers is:%d\n",sum);
}
int main()
{
	int num;
	printf("enter the num value:\n");
	scanf("%d",&num);
	sumon(num);
	return 0;
}
