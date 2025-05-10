#include<stdio.h>
void p1()
{
    int a[10],i,round,t;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    
    for(round=1;round<=9;round++)
    {
        for(i=0;i<=9-round;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
}
void p2()
{
    int a[10],i,round,t;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    
    for(round=1;round<=2;round++)
    {
        for(i=0;i<=9-round;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    printf("Second largest: %d",a[8]);
    
}
void p3()
{
    int a[10],i,round,t;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    
    for(round=1;round<=2;round++)
    {
        for(i=0;i<=9-round;i++)
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    printf("Second smallest: %d",a[8]);
    
}
void p4()
{
    int a[10],i,round,t;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    
    for(round=1;round<=9;round++)
    {
        for(i=0;i<=9-round;i++)
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<=9;i++)
        printf("%d ",a[i]);
}
void p5()
{
    int a[10],i,b[10];
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<=9;i++)
        b[i]=a[i];

    for(i=0;i<=9;i++)
        printf("%d ",b[i]);
}