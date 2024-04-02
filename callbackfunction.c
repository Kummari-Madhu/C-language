#include<stdio.h>
void sum(int a,int b)
{
    printf("sum=%d\n",a+b);
}
void sub(int a,int b)
{
    printf("sub=%d\n",a-b);
}
void display(void (*ptr)(int , int))
 {
    ptr(5,1);
 }
 int main()
 {
    int a=5,b=1;
    display(sum);
 }
