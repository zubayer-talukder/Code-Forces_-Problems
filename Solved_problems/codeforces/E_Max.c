#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int a,i=1,max=0;
    for(i;i<=n;i++)
    {   
        scanf("%d",&a);
        if(a>max){
            max=a;
        }
    } 
     printf("%d",max);
    return 0;
}