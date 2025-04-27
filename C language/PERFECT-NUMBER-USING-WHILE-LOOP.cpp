#include<stdio.h>
int main()  
{  
    int num, count = 1, sum = 0;  
    printf("Enter a number:");  
    scanf("%d",&num);  
    while(count<num)  
    {  
        if(num%count==0)  
        {  
            sum=sum+count;  
        }  
    count++;  
    }  
    if(sum == num)  
    {  
        printf("%d is a perfect number\n", num);  
    }  
    else  
    {  
        printf("%d is not a perfect number\n", num);  
    }  
  return 0;  
} 
