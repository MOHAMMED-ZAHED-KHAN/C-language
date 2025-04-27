#include <stdio.h>

int main() 
{
    int n,num1=0,num2=1,Num3=1,i=0;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d",&n);
    printf("Fibonacci Series:\n");
    for (i=1;i<=n;i++) 
	{
        printf("%d\n",num1);
        Num3=num1+num2;
        num1=num2;
        num2=Num3;
    }
    return 0;
}
