//Write a recursive function to calculate the HCF of given number.
#include<stdio.h>
int HCF(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    HCF(b,a%b);
}
int main()
{
    int x=18,y=9,hcf;
    hcf=HCF(y,x%y);
    printf("%d",hcf);
}
