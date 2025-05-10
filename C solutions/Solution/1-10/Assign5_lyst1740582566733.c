#include<stdio.h>
//Q1
// int main()
// {
//     int x;
//     printf("Enter a three digits number");
//     scanf("%d",&x);
//     printf("Sum of the digits: %d",x/100+x/10%10+x%10);
//     printf("\n");
//     return 0;
// }
//Q2
// int main()
// {
//     printf("%c  %d",'+','+');
//     printf("\n");
//     return 0;
// }
//Q3
// int main()
// {
//     int a;
//     float b;
//     char c;
//     double d;
//     printf("%lu\n",sizeof(a));
//     printf("%lu\n",sizeof(b));
//     printf("%lu\n",sizeof(c));
//     printf("%lu\n",sizeof(d));
//     printf("\n");
//     return 0;
// }
//Q4
// int main()
// {
//     int x;
//     printf("Enter a number");
//     scanf("%d",&x);
//     x=x/10*10;
//     printf("%d",x);
//     printf("\n");
//     return 0;
// }
//Q5
int main()
{
    int num,digit,result;
    printf("Enter a number");
    scanf("%d",&num);
    printf("enter a digit");
    scanf("%d",&digit);

    result=num*10+digit;
    printf("%d",result);
    printf("\n");
    return 0;
}
