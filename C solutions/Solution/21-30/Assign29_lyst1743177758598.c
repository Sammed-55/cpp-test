#include<stdio.h>
void p1()
{
    int a[10],i,sum;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0,sum=0;i<=9;i++)
        sum=sum+a[i];
    printf("Sum is %d",sum);
}
void p2()
{
    int a[10],i,sum;
    float avg;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    for(i=0,sum=0;i<=9;i++)
        sum=sum+a[i];
    avg=sum/10.0;
    printf("Average is %f",avg);
}
void p3()
{
    int a[10],i,sumEven,sumOdd;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    for(i=0,sumEven=0,sumOdd=0;i<=9;i++){
        if(a[i]%2==0)
            sumEven=sumEven+a[i];
        else
            sumOdd=sumOdd+a[i];
    }
    printf("Sum of even numbers is %d",sumEven);
    printf("\nSum of odd numbers is %d",sumOdd);
}
void p4()
{
    int a[10],i,max;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    max=a[0];
    for(i=1;i<=9;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("Max number is %d",max);
}
void p5()
{
    int a[10],i,min;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    min=a[0];
    for(i=1;i<=9;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("Min number is %d",min);
}
int main()
{
    p1();
    printf("\n");
    return 0;
}