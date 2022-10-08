//Write a recursive function to calculate the sum of the first N odd numbers.
#include<stdio.h>
int OddSum(int);
int main()
{
    printf("sum=%d",OddSum(10));
    return 0;
}
int OddSum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return("%d",2*n-1+OddSum(n-1));
}