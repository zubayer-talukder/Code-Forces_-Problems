#include<stdio.h>
int main(){
     int t;
     scanf("%d",&t);
     for(int i=1;i<=t;i++)
     {
        int x;
     scanf("%d",&x);
     do{
        printf("%d ",x%10);
        x=x/10;

     }
     while(x!=0);
     printf("\n");
     }
    return 0;
}