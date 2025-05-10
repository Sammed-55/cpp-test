#include<stdio.h>
//Q1
// int main()
// {
//     char ch;
//     printf("Enter a character");
//     scanf("%c",&ch);
//     printf("%c %d",ch,ch);
//     printf("\n");
//     return 0;
// }

//Q2
// int main()
// {
//     char ch;
//     printf("Enter ASCII Code");
//     scanf("%d",&ch);
//     printf("%d %c",ch,ch);
//     printf("\n");
//     return 0;
// }
//Q3
// int main()
// {
//     char a,b,c;
//     printf("Enter three characters");
//     scanf("%c %c %c",&a,&b,&c);
//     printf("%c %c %c\n",a,b,c);
//     printf("%d %d %d",a,b,c);
//     printf("\n");
//     return 0;
// }

//Q4, Q5
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    printf("Last digit = %d",x%10);
    printf("\nWithout last digit = %d",x/10);
    printf("\n");
    return 0;
}