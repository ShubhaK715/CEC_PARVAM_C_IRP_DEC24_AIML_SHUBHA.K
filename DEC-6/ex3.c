//to find the odd number or even number


#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%2==0)
    printf("is an even number");
    else
    printf("is an odd number");
    return 0;
}