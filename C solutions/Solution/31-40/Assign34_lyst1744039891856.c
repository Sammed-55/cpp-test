#include<stdio.h>
#include<string.h>
void p1()
{
    char str[50];
    int i;
    printf("Enter a string");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    printf("Length is %d",i-1);
}
void p2()
{
    char str[50],ch;
    int i,count=0;
    printf("Enter a string");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    printf("Enter a character");
    scanf("%c",&ch);
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("Count=%d",count);
}
void p3()
{
    char str[50],ch,v[]="aeiouAEIOU";
    int i,j,count=0;
    printf("Enter a string");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    for(i=0;str[i];i++)
    {
        for(j=0;v[j];j++)
            if(str[i]==v[j]){
                count++;
                break;
            }
    }
    printf("Total Vowels : %d",count);
}
void p4()
{
    char str[50];
    int i,count=0;
    printf("Enter a string");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    
    for(i=0;str[i];i++)
    {
        if(str[i]==' ')
            count++;
    }
    printf("Count=%d",count);
}
void p5()
{
    char str[50];
    int i;
    printf("Enter a string");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';

    for(i=0;str[i];i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
    }
    printf("%s",str);
}
void p6()
{
    char str[20];
    char ch;
    int i;
    printf("Enter a character");
    scanf("%c",&ch);
    fflush(stdin);
    printf("Enter a string");
    fgets(str,50,stdin);
    for(i=0;str[i];i++);
    str[i-1]='\0';
    printf("%c\n",ch);
    printf("%s",str);
}
int main()
{
    p6();
    printf("\n");
    return 0;
}