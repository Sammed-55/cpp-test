#include<stdio.h>
int max_element(int a[],int size)
{
    int i,max;
    max=a[0];
    for(i=1;i<size;i++)
        if(max<a[i])
            max=a[i];
    return max;
}
int min_element(int a[],int size)
{
    int i,min;
    min=a[0];
    for(i=1;i<size;i++)
        if(min>a[i])
            min=a[i];
    return min;
}
void sort(int a[],int size)
{
    int round,i,t;
    for(round=1;round<size;round++)
    {
        for(i=0;i<=size-1-round;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
}
void rotate(int a[],int size,int n,int d)
{
    int i,temp;
    if(d<0){
        while(n){
            temp=a[0];
            for(i=0;i<=size-2;i++)
            {
                a[i]=a[i+1];
            }
            a[size-1]=temp;
            n--;
        }
    }
    else
    {
        while(n){
            temp=a[size-1];
            for(i=size-1;i>=1;i--)
            {
                a[i]=a[i-1];
            }
            a[0]=temp;
            n--;
        }
    }

}

// [21,45,22,34,34,56,21,21,45,11]
//return result
// result = (34,1)
// result = (-1,0)
// result = (-1,1)
int findAdjacentDuplicate(int a[],int size)
{
    int i;
    for(i=0,i<=size-2;i++)
    {
        if(a[i]==a[i+1])
            return a[i];
    }
    return -1;
}
int main()
{
    int a[]={32,29,40,12,70};
    int i;
    for(i=0;i<=4;i++)
        printf("%d ",a[i]);
    rotate(a,5,2,-1);
    printf("\n");
    for(i=0;i<=4;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}