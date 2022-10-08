// Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int NumCount(int);
int count=0;
int main()
{
    int N,c;
    printf("Enter the number :");
    scanf("%d",&N);
    c=NumCount(N);
    printf("%d",c);
    return 0;
}
int NumCount(int n)
{
    if(n==0)
    {
        return count;
    }
    else
    {
        count++;
        return(NumCount(n/10));
    }
}