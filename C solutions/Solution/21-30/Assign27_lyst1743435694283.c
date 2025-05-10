int sumN(int n)
{
    if(n==1)
        return 1;
    return n+sumN(n-1);
}
int sumNOdd(int n)
{
    if(n==1)
        return 1;
    return 2*n-1+sumNOdd(n-1);
}
int sumNEven(int n)
{
    if(n==1)
        return 2;
    return 2*n+sumNEven(n-1);
}
int sumNSquare(int n)
{
    if(n==1)
        return 1;
    return n*n+sumNSquare(n-1);
}
int sumOfDigits(int num)
{
    if(num==0)
        return 0;
    return num%10+sumOfDigits(num/10);
}