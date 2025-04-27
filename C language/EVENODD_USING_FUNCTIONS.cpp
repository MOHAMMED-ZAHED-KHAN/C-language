#include<stdio.h>
void eo(int);
void eo(int num)
{
	if(num%2==0)
	printf("even");
	else
	printf("odd");
}
int main()
{
	int num;
	printf("enter the num value:\n");
	scanf("%d",&num);
	eo(num);
	return 0;
}
