float area_of_circle(int r)
{
    return 3.14*r*r;
}
float simple_interest(int p,float r,int t)
{
    return p*r*t/100;
}
int is_even(int x)
{
    return x%2==0;
}
void printN(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",i);
}
void printNOdd(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",2*i-1);
}