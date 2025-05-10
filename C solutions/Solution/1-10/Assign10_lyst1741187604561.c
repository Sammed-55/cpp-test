#include<stdio.h>

//Q1
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>0)
        printf("Positive");
    else if(x<0)
        printf("Negative");
    else
        printf("Zero");
    printf("\n");
    return 0;
}
//Q2
int main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        printf("Uppercase character");
    else if(ch>='a' && ch<='z')
        printf("Lowercase character");
    else if(ch>='0' && ch<='9')
        printf("Digit");
    else
        printf("Special Character");

    printf("\n");
    return 0;
}

//Q3
int main()
{
    int a,b,c;
    printf("Enter lengths of three sides of a triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a+b>c && a+c>b && b+c>a)
        printf("Valid Triangle");
    else
        printf("Not a valid triangle");
    printf("\n");
    return 0;
}
//Q4
int main()
{
    int m;
    printf("Enter month number");
    scanf("%d",&m);

    if(m==2)
        printf("28 or 29 Days");
    else if(m==4 || m==6|| m==9 || m==11)
        printf("30 Days");
    else 
        printf("31 Days");
    

    printf("\n");
    return 0;
}
//31 Days m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12
//if( (m<=7&& m%2) || (m>=8 && m%2==0) )
//30 Days m==4 || m==6|| m==9 || m==11
