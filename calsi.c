#include<stdio.h>
void sum(int a,int b)
{
    printf("%d",a+b);
}
void sub(int a,int b)
{
    printf("%d",a-b);
}
void mul(int a,int b)
{
    printf("%d",a*b);
}
void div(int a,int b)
{
    printf("%d",a/b);
}
 void (*fptr[10])(int,int)={sum,sub,mul};
void main()
{
    int ch,a,b;
   
    printf("enter the symbol number");
    scanf("%d",&ch);
    printf("enter the number");
    scanf("%d%d",&a,&b);
    (*fptr[ch])(a,b);
}