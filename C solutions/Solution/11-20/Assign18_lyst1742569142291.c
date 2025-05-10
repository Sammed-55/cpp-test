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

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
// 1       4       j>=4&&j<=4
// 2      345      j>=3&&j<=5
// 3     23456     j>=2&&j<=6
// 4    1234567    j>=1&&j<=7      j>=5-i && j<=3+i
void p2()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
// 1    1234567    j>=1&&j<=7
// 2     23456     j>=2&&j<=6
// 3      345      j>=3&&j<=5
// 4       4       j>=4&&j<=4      j>=i && j<=8-i
void p3()
{
    int i,j,flag;

    for(i=1;i<=4;i++)
    {
        flag=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                if(flag)
                    printf("*");
                else
                    printf(" ");
                flag=1-flag;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
// 1       4       j>=4&&j<=4&&flag
// 2      3 5      j>=3&&j<=5&&flag
// 3     2 4 6     j>=2&&j<=6&&flag
// 4    1 3 5 7    j>=1&&j<=7&&flag      j>=5-i && j<=3+i
void p4()
{
    int i,j,k;

    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i && j<=3+i)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void p5()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
                printf("%c",k++);
            else
                printf(" ");
        }
        printf("\n");
    }
}
void p6()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void p7()
{
    int i,j,flag,k;

    for(i=1;i<=5;i++)
    {
        k=1;
        flag=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                if(flag){
                    printf("%d",k);
                    j<5?k++:k--;
                }
                else{
                    printf(" ");
                    if(j==5 && i%2==0)
                        k--;
                }
                flag=1-flag;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
void p8()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
// 1   1234567     j<=4||j>=4
// 2   123 567     j<=3||j>=5
// 3   12   67     j<=2||j>=6
// 4   1     7     j<=1||j>=7  j<=5-i||j>=3+i
void p9()
{
    int i,j,k;

    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i){
                printf("%d",k);
                j<4?k++:k--;
            }
            else{
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
}
void p10()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i){
                printf("%c",k);
                j<4?k++:k--;
            }
            else{
                printf(" ");
                if(j==4)
                    k--;
            }
        }
        printf("\n");
    }
}