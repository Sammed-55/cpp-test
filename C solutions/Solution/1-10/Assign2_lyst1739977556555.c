#include<stdio.h>
//Q1
// int main()
// {
//     int a,b,c;
//     float avg;
//     printf("Enter three numbers");
//     scanf("%d%d%d",&a,&b,&c);
//     avg=(a+b+c)/3.0;
//     printf("Average is %f",avg);
//     printf("\n");
//     return 0;
// }

//Q2
// int main()
// {
//     int r;
//     float c;
//     printf("Enter radius");
//     scanf("%d",&r);
//     c=2*3.14*r;
//     printf("Result is %0.2f",c);
//     printf("\n");
//     return 0;
// }

//Q3
// int main()
// {
//     int p,t;
//     float si,r;
//     printf("Enter p,r and t");
//     scanf("%d%f%d",&p,&r,&t);
//     si=p*r*t/100;
//     printf("SI=%f",si);
//     printf("\n");
//     return 0;
// }

//Q4
// int main()
// {
//     int l,b,h,V;
//     printf("Enter l,b and h");
//     scanf("%d%d%d",&l,&b,&h);
//     V=l*b*h;
//     printf("Volume is %d",V);
//     printf("\n");
//     return 0;
// }
//Q5
int main()
{
    float cp,sp;
    printf("Enter cp and sp of one dozen of Bananas");
    scanf("%f%f",&cp,&sp);
    printf("Profit or Loss: %f",(sp-cp)/12*25);

    printf("\n");
    return 0;
}