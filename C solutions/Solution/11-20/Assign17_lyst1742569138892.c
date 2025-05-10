#include<stdio.h>
void p1();
void p2();
void p3();
void p4();
void p5();
void p6();
void p7();
void p8();
void p9();
void p10();
int main()
{
    p10();
    printf("\n");
    return 0;
}
void p1()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void p2()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
// 1       5   j>=5
// 2      45   j>=4
// 3     345   j>=3
// 4    2345   j>=2
// 5   12345   j>=1

//             j>=6-i
void p3()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void p4()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void p5()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                printf("%d",j);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void p6()
{
    int i,j,k;

    for(i=1;i<=4;i++)
    {
        k=i;
        for(j=1;j<=4;j++)
        {
            if(j<=i)
                printf("%d",k--);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void p7()
{
    int i,j;
    char k;

    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("%c",k++);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void p8()
{
    int i,j,k=1;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
                printf("%d",k++);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void p9()
{
    int i,j;
    char k;

    for(i=1;i<=5;i++)
    {
        k=64+i;
        for(j=1;j<=5;j++)
        {
            if(j>=i)
                printf("%c",k++);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void p10()
{
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1||i==5||j==1||j==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}