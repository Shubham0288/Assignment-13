// Write a recursive function to calculate the sum of sqaures of the first N natural numbers.
#include<stdio.h>
int Squaresum(int);
int main()
{
    printf("sum=%d",Squaresum(10));
    return 0;
}
int Squaresum(int n)
{
    if(n==1)
    {
       return 1; 
    }
    return(n*n+Squaresum(n-1));

}