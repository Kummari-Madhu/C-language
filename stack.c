#include<stdio.h>
#include<stdlib.h>
int stack[5];
int top=-1,max=4,min=-1;
void push()
{int num;
if(top==max)
{
printf("stack over flow");
}
else
{printf("enter the num");
scanf("%d",&num);
top++;
stack[top]=num;
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
void display()
{int i;
for(i=0;stack[i]!=0;i++)
{
printf("%d  ",stack[i]);
}
}
int main()
{
int num;
while(1){
printf("enter the choice to push 1,pop2,display 3");
scanf("%d",&num);
switch(num)
{
case 1:{push();
        break;
        }
case 2:{pop();
        break;
        }
case 3:{display();
        break;
        }
default:exit(0);
}
}
}


    

