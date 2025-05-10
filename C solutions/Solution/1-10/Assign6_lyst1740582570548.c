#include<stdio.h>
//Q1
//int main()
// {
//     float INR, USD;

//     printf("Enter amount in INR: ");
//     scanf("%f",&INR);
//     // 1 USD == INR 84.23 
//     // 1 INR == 1/84.23 USD     
//     USD=1/84.23*INR;
//     printf("USD %0.3f",USD);
//     printf("\n");
//     return 0;
// }
//Q2
// int main()
// {
//     int x;
//     printf("Enter a three digits number");
//     scanf("%d",&x);
//     x=x%10*100+x/10;
//     printf("%d",x);
//     printf("\n");
//     return 0;
// }
//Q3,Q4,Q5
int main()
{
    int x;
    x=10>8>4;
    printf("%d ",x);
    x=!2>-2;
    printf("%d ",x);
    x=3<0&&5>0;
    printf("%d ",x);

    printf("\n");
    return 0;
}