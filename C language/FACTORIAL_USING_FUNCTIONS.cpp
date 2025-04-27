#include<stdio.h>
int factorial(int);
int factorial(int num)
{
	if(num==0)
	return 1;
	else
	return (num*factorial(num-1));
}
int main()
{
	int a;
	printf("enter a value ");
	scanf("%d",&a);
	int fact=factorial(a);
	printf("%d\n",fact);
	return 0;
}
