#include<stdio.h>

//Decision Control Instruction
//Selection Control Instruction
/*

1) if
2) if else
3) Conditional Operator (?:)
    Ternary Operator (requires 3 operands)

    condition ? statement1 : statement 2;

*/

//Write a program to check whether a given number is positive or non positive
// int main()
// {
//     int x;
//     printf("Enter a number");
//     scanf("%d",&x);
    
//     x>0 ? printf("Positive") : printf("Non Positive");

//     // if(x>0) 
//     //     printf("Positive");
//     // else
//     //     printf("Non Positive");


//     printf("\n");
//     return 0;
// }

int main()
{
    int x;
    x=5>4 ? 5 : 4 ;
    printf(x>0 ? "Positive" : "Non Positive");
    printf("Positive");

    printf("\n");
    return 0;
}


