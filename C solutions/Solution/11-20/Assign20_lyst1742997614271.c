#include<stdio.h>
#include<stdlib.h>
/*
//Q1
int main()
{
    int marks;
    printf("\nEnter your marks: ");
    scanf("%d",&marks);
    switch(marks)
    {
        case 90 ... 100:
            printf("GRADE A");
            break;
        case 80 ... 89:
            printf("GRADE B");
            break;
        case 70 ... 79:
            printf("GRADE C");
            break;
        case 60 ... 69:
            printf("GRADE D");
            break;
        case 50 ... 59:
            printf("GRADE E");
            break;
        case 0 ... 49:
            printf("GRADE F");
            break;
        default:
            printf("Invalid Marks");
    }
    printf("\n");
    return 0;
}
*/
/*
//Q2
int main()
{
    int choice,n,f;
    float a;
    while(1)
    {
        printf("\n1. Factorial");
        printf("\n2. Check Even");
        printf("\n3. Area of Circle");
        printf("\n4. Sum of first N natural numbers");
        printf("\n5. Exit");
        printf("\n\nEnter your chocie");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter a number: ");
                scanf("%d",&n);

                f=1;
                while(n)
                {
                    f=f*n;
                    n--;
                }
                printf("Factorial is %d",f);
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d",&n);
                n%2?printf("Odd"):printf("Even");
                break;
            case 3:
                printf("enter radius of a circle");
                scanf("%d",&n);
                a=3.14*n*n;
                printf("Area is %f",a);
                break;
            case 4:
                printf("Enter a number");
                scanf("%d",&n);
                f=0;
                while(n)
                {
                    f=f+n;
                    n--;
                }
                printf("Sum is %d",f);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid Choice");
        }

    }
    printf("\n");
    return 0;
}
*/
/*
//Q3
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A' ... 'Z':
            printf("Uppercase alphabet");
            break;
        case 'a' ... 'z':
            printf("Lowercase alphabet");
            break;
        default:
            printf("Special Character");
    }
    printf("\n");
    return 0;
}
*/
/*
//Q4
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Vowel");
            break;
        case 'B' ... 'D': case 'F' ... 'H': case 'J' ... 'N': case  'P' ... 'T': case 'V' ... 'Z':
        case 'b' ... 'd': case 'f' ... 'h': case 'j' ... 'n': case  'p' ... 't': case 'v' ... 'z':
            printf("Consonant");
            break;
        default:
            printf("Special Character");
    }
    printf("\n");
    return 0;
}
*/
//Q5
int main()
{
    int choice,a,b,c,L,n;
    while(1)
    {
        printf("\n1. LCM");
        printf("\n2. Sum of Digits");
        printf("\n3. Volume of a Cuboid");
        printf("\n4. Check Prime");
        printf("\n5. Exit");
        printf("\n\nEnter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d%d",&a,&b);
                for(L=a>b?a:b;L<=a*b;L++)
                    if(L%a==0&&L%b==0)
                        break;
                printF("LCM is %d",L);
                break;
            case 2:
                a=0;
                printf("Enter a number");
                scanf("%d",&n);
                while(n)
                {
                    a=a+n%10;
                    n=n/10;
                }
                printf("Sum is %d",a);
                break;
            case 3:
                printf("Enter l,b and h of a Cuboid");
                scanf("%d%d%d",&a,&b,&c);
                printf("Volume is %d",a*b*c);
                break;
            case 4:
                printf("Enter a number");
                scanf("%d",&n);
                for(a=2;a<n;a++)
                    if(n%a==0)
                        break;
                if(n==a)
                    printf("Prime ");
                else
                    printf("Not Prime");
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid Choice");
        }
    }

}