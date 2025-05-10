#include<stdio.h>
//Q1
int main()
{
    int s, i,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
        s=s+i;
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}
//Q2
//n=5
// 2+4+6+8+10
int main()
{
    int s, i,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
        s=s+2*i;
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}
//Q3
//n=5
// 1+3+5+7+9
int main()
{
    int s, i,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
        s=s+2*i-1;
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}
//Q4
//n=5
// 1+4+9+16+25
int main()
{
    int s, i,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
        s=s+i*i;
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}
//Q5
//n=5
// 1+8+27+64+125
int main()
{
    int s, i,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1,s=0;i<=n;i++)
        s=s+i*i*i;
    printf("Sum is %d",s);
    printf("\n");
    return 0;
}