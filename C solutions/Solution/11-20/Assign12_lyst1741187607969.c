#include<stdio.h>
//Q1
int main()
{
    int i=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("MySirG\n");
        i++;
    }
    
    return 0;
}
//Q2
int main()
{
    int i=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
    
    return 0;
}

//Q3
// n=5
// 5 4 3 2 1
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    
    while(n>=1)
    {
        printf("%d ",n);
        n--;
    }
    return 0;
}
//Q4
int main()
{
    int i=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",2*i-1);
        i++;
    }
    
    return 0;
}
//Q5
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("%d ",2*n-1);
        n--;
    }
    printf("\n");
    return 0;
}
//Q6
int main()
{
    int i=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",2*i);
        i++;
    }
    printf("\n");
    return 0;
}
//Q7
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>=1)
    {
        printf("%d ",2*n);
        n--;
    }
    printf("\n");
    return 0;
}
//Q8
int main()
{
    int i=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i);
        i++;
    }
    
    return 0;
}
//Q9
int main()
{
    int i=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i*i*i);
        i++;
    }
    
    return 0;
}
//Q10

int main()
{
    int i=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d x %d = %d\n",n,i,n*i);   
        i+=1;
    }
    printf("\n");
    return 0;
}