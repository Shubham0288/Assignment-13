// Write a recursive function to print first N terms of Fibonacci series.
#include<stdio.h>
int fibSeries(int);
int main()
{
    int N,i;
    printf("Enter the N term : ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("%d ",fibSeries(i));
    }
    return 0;
}
int fibSeries(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    
    return(fibSeries(n-1)+fibSeries(n-2));
}