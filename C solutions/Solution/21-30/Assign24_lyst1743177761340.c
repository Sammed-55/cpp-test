#include<stdio.h>
#include "Assign23.c"
void printAllPrime(int a,int b)
{
    int x;
    for(x=a;x<=b;x++)
    {
        if(isPrime(x))
            printf("%d ",x);
    }
}
void printFibonacci(int n)
{
    int a=-1,b=1,c;
    while(n){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;        
    }
}
int fact(int n)
{
    int i,f;
    for(i=1,f=1;i<=n;i++)
        f=f*i;
    return f;
}
int combi(int n,int r)
{
    return fact(n)/fact(n-r)/fact(r);
}
void printPascal(int lines)
{
    int i,j,flag,n,r;

    for(i=1;i<=lines;i++)
    {
        n=i-1;
        flag=1;
        for(j=1,r=0;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i && j<=lines-1+i)
            {
                if(flag)
                    printf("%3d",combi(n,r++));
                else
                    printf("   ");
                flag=1-flag;
            }
            else
                printf("   ");
        }
        printf("\n");
    }
}
int countDigits(int num)
{
    int count=0;
    while(num)
    {
        num/=10;
        count++;
    }
    return count;
}
int power(int x,int y)
{
    int i,result=1;
    for(i=1;i<=y;i++)
    {
        result=result*x;
    }
    return result;
}
int isArmstrong(int x)
{
    int n,sum=0,y;
    n=countDigits(x);
    y=x;
    while(y)
    {
        sum=sum+power(y%10,n);
        y=y/10;
    }
    return x==sum;
}
void printAllArmstrong(int a,int b)
{
    int x;
    for(x=a;x<=b;x++)
    {
        if(isArmstrong(x))
            printf("%d ",x);
    }
}
int sumOfSeries(int n)
{
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+fact(i)/i;
    }
    return sum;
}
int main()
{
    printAllArmstrong(10,10000);
    printf("\n");
    return 0;
}