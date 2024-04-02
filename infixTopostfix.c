#include<stdio.h>
char stack[5],min=-1,max=4,top=-1;
int priority(char n)
{
    if(n=='+' || n=='-')
    {
        return 2;
    }
    if(n=='*' ||n=='/'){
        return 1;
    }
    return 0;
}
int push(int n)
{
   if(top==max)
   {
    printf("over flow");
   }
   else{
    top++;
    stack[top]=n;
   }
}
char pop()
{
    if(top==min)
    {
        printf("under flow");
    }
    else{
        int p=stack[top];
        top--;
        return p;
    }
}
int main()
{
    char exp[20],ele;
    printf("enter the exp");
    gets(exp);
    int i=0;
    while(exp[i]!='\0')
    {
        if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/')
        {
            while(priority(exp[i])>=priority(stack[top]) &&  (top>min))
            {
                ele=pop();
                printf("%c",ele);
            }
            push(exp[i]);
        }
        else{
            printf("%c",exp[i]);
        }
        i++;
    }
    while(top!=min)
    {
        printf("%c",pop());
    }
}

