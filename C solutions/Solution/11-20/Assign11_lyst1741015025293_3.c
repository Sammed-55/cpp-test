#include<stdio.h>
//Q1
// int main()
// {
//     int i=10;
//     while(i<=50)
//     {
//         printf("MySirG\n");
//         i+=10;
//     }
    
//     return 0;
// }
//Q2
// 1 2 3 4 5 6 7 8 9 10
// int main()
// {
//     int i=1;
//     while(i<=10)
//     {
//         printf("%d ",i);   
//         i++;
//     }
//     printf("\n");
//     return 0;
// }

//Q3
// 10 9 8 7 6 5 4 3 2 1
// int main()
// {
//     int i=10;
//     while(i>=1)
//     {
//         printf("%d ",i);   
//         i--;
//     }
//     printf("\n");
//     return 0;
// }

//Q4
// 1 3 5 7 9 11 13 15 17 19
//AP a+(n-1)d  | 1+(i-1)2 ==> 1+2i-2 ==> 2i-1
// int main()
// {
//     int i=1;
//     while(i<=10)
//     {
//         printf("%d ",2*i-1);   
//         i+=1;
//     }
//     printf("\n");
//     return 0;
// }

//Q5
// int main()
// {
//     int i=10;
//     while(i>=1)
//     {
//         printf("%d ",2*i-1);   
//         i-=1;
//     }
//     printf("\n");
//     return 0;
// }

//Q6
// int main()
// {
//     int i=1;
//     while(i<=10)
//     {
//         printf("%d ",2*i);   
//         i+=1;
//     }
//     printf("\n");
//     return 0;
// }
//Q7
//int main()
// {
//     int i=10;
//     while(i>=1)
//     {
//         printf("%d ",2*i);   
//         i-=1;
//     }
//     printf("\n");
//     return 0;
// }
//Q8
//1 4 9 16 25 36 49 64 81 100
// int main()
// {
//     int i=1;
//     while(i<=10)
//     {
//         printf("%d ",i*i);   
//         i+=1;
//     }
//     printf("\n");
//     return 0;
// }
//Q9
//
// int main()
// {
//     int i=1;
//     while(i<=10)
//     {
//         printf("%d ",i*i*i);   
//         i+=1;
//     }
//     printf("\n");
//     return 0;
// }
//Q10
// 5 x 1 = 5
// 5 x 2 = 10
// ...
// 5 x 10 = 50
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("5 x %d = %d\n",i,5*i);   
        i+=1;
    }
    printf("\n");
    return 0;
}