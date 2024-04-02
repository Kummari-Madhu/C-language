#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    char sub[10];
    int n,l,l2,i,j;
    char ch;
    printf("enter the string");
    gets(str);
    printf("enter the sub string");
    gets(sub);
    printf("enter the index");
    scanf("%d",&n);
    l=strlen(str);
    l2=strlen(sub);
    for(i=n;i<l;i++)
    {   ch=str[i+l2];
        str[i+l2]=str[i];
        str[i+2*l2]=ch;
    }
    for(i=n,j=0;j<l2;i++,j++)
    {
        str[i]=sub[j];
    }
    printf("%s",str);
}
