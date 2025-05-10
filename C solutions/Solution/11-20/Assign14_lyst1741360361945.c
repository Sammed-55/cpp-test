#include<stdio.h>
//Q1
int main()
{
    int p, i,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,p=1;i<=n;i++)
        p=p*i;
    printf("Factorial of %d is %d",n,p);
    printf("\n");
    return 0;
}
//Q2
int main()
{
    int x,count=0;
    printf("Enter a number");
    scanf("%d",&x);
    while(x)
    {
        x=x/10;
        count++;
    }
    printf("Count is %d",count);
    printf("\n");
    return 0;
}
//Q3
int main()
{
    int i,x;
    printf("Enter a number");
    scanf("%d",&x);
    for(i=2;i<x;i++)
        if(x%i==0)
            break;
    if(i==x)
        printf("Prime");
    else
        printf("Not Prime");
    
    printf("\n");
    return 0;
}
//Q4
int main()
{
    int a,b,L;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b ; L<=a*b ; L++)
        if(L%a==0 && L%b==0)
            break;
    
    printf("LCM is %d",L);
    printf("\n");
    return 0;
}
//Q5
int main()
{
    int x,y=0;
    printf("Enter a number");
    scanf("%d",&x);
    while(x)
    {
        y=y*10+x%10;
        x=x/10;
    }
    printf("Reverse is %d",y);
    printf("\n");
    return 0;
}