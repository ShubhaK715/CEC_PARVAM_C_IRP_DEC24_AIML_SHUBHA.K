#include<stdio.h>
int main(){
    int num, sum=0, rem=0;
    printf("Enter the number to get the sum of digits:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*rem;
        num=num/10;
    }
    printf("Sum of digits = %d",sum);
    return 0;
    }