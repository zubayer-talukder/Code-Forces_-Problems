#include<stdio.h>
int main(){

    int i,n,result;
    scanf("%d",&n);
    for(i=1;i<=12;i++){
        printf("%d * %d = %d \n",n,i,result=n*i);
    }
     
    return 0;
}