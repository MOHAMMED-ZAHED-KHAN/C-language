#include<stdio.h>
void ott(int);
void ott(int num)
{
	printf("%d\n",num);
	if (num<10)
	ott(num+1);
}
int main()
{
	int num=1;
	ott(num);
	return 0;
}
