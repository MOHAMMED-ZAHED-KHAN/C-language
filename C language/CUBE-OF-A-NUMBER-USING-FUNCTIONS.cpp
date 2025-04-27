#include<stdio.h>
int cube(int);
int cube(int num)
{
	return num*num*num;
}
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	printf("cube of a number is:%d\n",cube(num));
	return 0;
}
