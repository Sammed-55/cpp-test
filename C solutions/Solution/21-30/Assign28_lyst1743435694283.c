int fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int hcf(int a,int b)
{
    if(a>b)
        if(a%b==0)
            return b;
        else
            return hcf(a%b,b);
    else
        if(b%a==0)
            return a;
        return hcf(a,b%a);
}
int fib(int n)
{
    if(n==0||n==1)
        return n;
    return fib(n-1)+fib(n-2);
}
void printFib(int n)
{
    if(n>=0)
    {
        printFib(n-1);
        printf(" %d",fib(n));
    }

}
int countDigits(int num)
{
    if(num==0)
        return 0;
    return 1+countDigits(num/10);
}
double power(double x,double y)
{
    if(y==0)
        return 1;
    if(y>0)
        return x*power(x,y-1);
    else
        return 1/x*power(x,y+1);
}