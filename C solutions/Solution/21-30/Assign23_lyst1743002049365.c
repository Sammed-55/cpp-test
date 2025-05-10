#include<stdio.h>
int lcm(int a,int b)
{
    int L;
    for(L=a>b?a:b;L<=a*b;L++)
        if(L%a==0 && L%b==0)
            return L;
}
int hcf(int a,int b)
{
    int H;
    for(H=a<b?a:b;H>=1;H--)
        if(a%H==0 && b%H==0)
            return H;
}
int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int nextPrime(int n)
{
    while(!isPrime(++n));
    return n;
}
void printNPrime(int n)
{
    int x=2;
    while(n)
    {
        printf("%d ",x);
        n--;
        x=nextPrime(x);
    }
}