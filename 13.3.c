// Write a recursive unction to calculate the sum of the N even numbers.
#include<stdio.h>
int Sumeven(int);
int main()
{
    printf("sum=%d",Sumeven(10));
}
int Sumeven(int n)
{
    if(n==2)
    {
        return 1;
    }
    return("%d",2*n+Sumeven(n-1));
}