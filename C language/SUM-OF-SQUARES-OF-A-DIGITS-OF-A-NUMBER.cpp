#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter the number ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem*rem;
        num=num/10;
    }
    printf("sum of the digits:%d\n",sum);
    return 0;
}
