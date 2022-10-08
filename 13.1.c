// Write a recursive function to calculate the sum of the first N natural numbers.
#include<stdio.h>
int Sum(int);
int main()
{
    printf("Sum=%d",Sum(10));
    return 0;
}
int Sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return("%d",n+Sum(n-1));

}