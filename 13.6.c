//Write a recursive fuction to calculate the Factorial of the given number.
#include<stdio.h>
int Fact(int);
int main()
{
    printf("Fcat=%d",Fact(3));
    return 0;
}
int Fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    return(n*Fact(n-1));
}