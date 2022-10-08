// Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int power(int ,int);
int main()
{
    int N,P,result;
    printf("Enter the number : ");
    scanf("%d",&N);
    printf("Enter the power : ");
    scanf("%d",&P);
    result=power(N,P);
    printf("Power is %d",result);
    return 0;
}
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    else
    {
        return n* power(n,p-1);
    }
}