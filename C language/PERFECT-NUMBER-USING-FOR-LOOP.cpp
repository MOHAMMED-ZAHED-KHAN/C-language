#include<stdio.h>  
  
int main()  
{  
    int num, count, sum = 0;  
  
    printf("Enter a number\n");  
    scanf("%d", &num);  
  
    printf("Factors of %d are(except the number itself):\n", num);  
    for(count = 1; count < num; count++)  
    {  
        if(num % count == 0)  
        {  
            printf("%d\n", count);  
            sum = sum + count;  
        }  
    }  
  
    if(sum == num)  
        printf("\n%d is a perfect number\n", num);  
    else  
        printf("\n%d is not a perfect number\n", num);  
  
    return 0;  
}
