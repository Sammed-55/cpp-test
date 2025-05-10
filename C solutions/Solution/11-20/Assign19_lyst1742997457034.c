#include<stdio.h>
#include<stdlib.h>
/*
//Q1
int main()
{
    int month;
    printf("enter month number: ");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Days");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Days");
            break;
        case 2:
            printf("28 or 29 days");
            break;
        default:
            printf("Invalid month number");
    }
    printf("\n");
    return 0;
}
*/
/*
//Q2
int main()
{
    int choice,a,b;
    float r;
    while(1)
    {
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter two numbers");
                scanf("%d%d",&a,&b);
                printf("Sum is %d",a+b);
                break;
            case 2:
                printf("Enter two numbers");
                scanf("%d%d",&a,&b);
                printf("Difference is %d",a-b);
                break;
            case 3:
                printf("Enter two numbers");
                scanf("%d%d",&a,&b);
                printf("Product is %d",a*b);
                break;
            case 4:
                printf("Enter two numbers");
                scanf("%d%d",&a,&b);
                r=a*1.0/b;
                printf("Sum is %f",r);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice, retry");
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
    int weekDay;
    printf("(For monday-1)\n");
    printf("Enter week day number: ");
    scanf("%d",&weekDay);
    switch(weekDay)
    {
        case 1:
            printf("Monday Motivation");
            break;
        case 2:
            printf("Nothing like Tuesday");
            break;
        case 3:
            printf("Happy Wednesday");
            break;
        case 4:
            printf("Sunny Thursday");
        case 5:
            printf("Thank God its Friday");
            break;
        case 6:
            printf("It's Party Time");
            break;
        case 7:
            printf("Happy Holiday");
            break;
        default:
            printf("Invalid Week Day");
    }
    printf("\n");
    return 0;
}
*/
/*
//Q4
int main()
{
    int choice,a,b,c;
    while(1)
    {
        printf("\nEnter length of sides of a triangle");
        scanf("%d%d%d",&a,&b,&c);

        printf("\n1. Check for Isosceles triangle");
        printf("\n2. Check for right angled triangle");
        printf("\n3. Check for Equilateral triangle");
        printf("\n4. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&choice);
        if(a+b>c && b+c>a &&a+c>b);
        else
            choice=5;

        switch(choice)
        {
            case 1:
                if(a==b || a==c || b==c)
                    printf("It is an isosceles triangle");
                else
                    printf("Its is not an isosceles triangle");
                break;
            case 2:
                if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
                    printf("It is a right angled triangle");
                else
                    printf("It is not a right angled triangle");
                break;
            case 3:
                if(a==b && a==c)
                    printf("Equilateral triangle");
                else
                    printf("Not an equilateral triangle");
                break;
            case 4:
                exit(0);
            case 5:
                printf("Invalid triangle sides were given");
                break;
            default:
                printf("Enter a valid choice, retry");
        }

    }
    printf("\n");
    return 0;
}
*/
//Q5
int main()
{
    int var;
    printf("Enter a number");
    scanf("%d",&var);
    switch(var)
    {
        case 1:
                printf("good");
                break;
        case 2:
                printf("better");
                break;
        case 3:
                printf("best");
                break;
        default:
                printf("Invalid");
    }
    printf("\n");
    return 0;
}
