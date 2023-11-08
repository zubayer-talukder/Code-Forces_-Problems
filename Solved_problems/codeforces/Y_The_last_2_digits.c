#include<stdio.h>
int main(){

     int a,b,c,d;
    int result;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    a%=100;
    b%=100;
    c%=100;
    d%=100;

    result=a*b*c*d;
    printf("%d",result);
    if(result<10){
        printf("%02d",result);
    }
    else
    printf("%d",result%100);
     
    return 0;
}