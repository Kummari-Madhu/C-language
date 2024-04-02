//stack program
#include<stdio.h>
int queue[5];
int max=4,min=-1,front=-1,rare=-1;
void enqueue(int ele)
{
   if(rare==max)
   {
      printf("queue is overflow\n");
   }
   else
   {
       rare++;
       queue[rare]=ele;
       if(front==-1)
       {
          front++;
        }
       printf("%d inserted success\n",ele);
    }
 }
 int dequeue()
 {    if((front==-1) || (front>rare))
     {  
         printf("queue is undeflow\n");
         return(0);
      }
      else if(front==rare)
      {  int ele;
         ele=queue[front];
         printf("%d deleted success\n",ele);
         front=rare=-1;
       }
      else{
         int ele;
         ele=queue[front];
         front++;
         printf("%d is deleted success\n",ele);
      }
 }
 void display()
 {
     int i;
     if(front==-1||front>rare)
     {
         printf("no elelments to display\n");
     }
     else{
         for(i=front;i<=rare;i++)
         {
            printf("%d\n",queue[i]);
          }
 }
 }
 int main()
 {
    int n,p;
    while(n!=4){
    printf("1-enqueu\n2-dequeu\n3-display\n4-exit");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("enter the element");
               scanf("%d",&p);
               enqueue(p);
               break;
        case 2:dequeue();
               break;
        case 3:display();
               break;
        default:break;
        }
     }
  }
    
