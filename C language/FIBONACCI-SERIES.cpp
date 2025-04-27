#include <stdio.h>
int main() 
{
    int n,num1=0,num2=1,Num3=1,count=0;
    printf("Enter the number of Fibonacci numbers to generate:");
    scanf("%d",&n);
    printf("Fibonacci Series:\n");
    while (count < n) 
	{
        printf("%d\n", num1);
        Num3 = num1 + num2;
        num1 = num2;
        num2 = Num3;
        count++;
    }
    return 0;
}
