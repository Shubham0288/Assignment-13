// Write a recursive function to calculate the sum of the digits in number
#include<stdio.h>
int Sumdigit(int);
int main()
{
    printf("Sum=%d",Sumdigit(333));
    return 0;
}
int Sumdigit(int n)
{
    if(n<=9 && n==0)
    {
        return 0;
    }
    return((n%10)+Sumdigit(n/10));
    
}