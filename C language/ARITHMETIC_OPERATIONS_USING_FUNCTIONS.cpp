#include<stdio.h>
void arth(int,int);
void arth(int a , int b)
{
	printf("addition is:%d\n",a+b);
	printf("subtraction is:%d\n",a-b);
	printf("multiplication is:%d\n",a*b);
	printf("division is:%d\n",a/b);
	printf("remainder is:%d\n",a%b);	
}
int main()
{
	int a,b;
	printf("enter the a and b values:\n");
	scanf("%d%d",&a,&b);
	arth(a,b);
	return 0;
}
