#include<stdio.h>
#include<string.h>
int main()
{
    char rom[4]={'I','V','X','L'};
    int num[4]={1,5,10,50};
    char n[5];
    int sum=0;
    printf("enter the roman num");
    gets(n);
    int l=strlen(n);
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<4;j++)
      {
        if(n[i]==rom[j])
        { 
            for(int p=0;p<4;p++){
            if(n[i+1]==rom[j])
            {
                if(num[j]<num[p])
                {
                    sum=sum-num[p];
                }
                else{
                    sum=sum+num[p];
                }
            }
        }}
       }
    }   

     printf("%d",sum);

}