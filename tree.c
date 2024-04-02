#include<stdio.h>
int stack[7];
int top=-1,max=4,min=-1;
void push(int p)
{int num;
if(top==max)
{
//printf("stack over flow");
}
else
{//printf("enter the num");
//scanf("%d",&num);
top++;
stack[top]=p;
}}
void pop()
{
if(top==min)
{
printf("stack under flow");
}
else{
stack[top]=0;
top--;
}
}
char cast(int p)
{
   switch(p)
   {
      case 0:return 'a';
             break;
      case 1:return 'b';
             break;
      case 2:return'c';
             break;
      case 3:return'd';
             break;
      case 4:return'e';
             break;
      case 5:return'f';
             break;
      case 6:return'g';
             break;
      default:return'h';
             break;
      }
      
  }
int main()
{
int a[7][7],i,j;
char ch;
printf("enter the elements \n");
for(i=0;i<7;i++)
{
   for(j=0;j<7;j++)
   {  
      scanf("%d",&a[i][j]);
      }
 }
 printf("a->");
 i=0;
 push(0);
 while(1)
 {
    for(j=0;j<8;j++)
    {
        if(a[i][j]==1)
        {  a[i][j]=0;
           push(j);
           ch=cast(j);
           printf("%c->",ch);
           break;
        }
      }
    if(top==-1)
    {
       break;
       }
     if(j!=8){
    i=stack[top];
    }
    else
    {
       i=stack[top];
       pop();
       }
       }
  }
  
