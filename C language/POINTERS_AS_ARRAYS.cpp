#include<stdio.h>
int main()
{
	int marks[5]={10,10,10,10,10},i;
	int* ptr[5];
	for(i=0;i<5;i++)
	{
		ptr[i]=&marks[i];
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",*ptr[i]);
	}
	return 0;
}
