/* USING VOID 

#include<stdio.h>
void sum(int,int);
void sum(int a , int b)
{
	printf("sum is:%d\n",a+b);
}
int main()
{
	int x,y;
	printf("enter the values of x and y:\n");
	scanf("%d%d",&x,&y);
	sum(x,y);
	return 0;
}

*/

// USING INT 

#include<stdio.h>
int sum(int,int);
int sum(int a , int b)
{
	return(a+b);
}
int main()
{
	int x,y,result;
	printf("enter the values of x and y:\n");
	scanf("%d%d",&x,&y);
	result=sum(x,y);
	printf("result is:%d\n",result);
	return 0;
}

