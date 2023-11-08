#include<stdio.h>
int main(){

     long long int a,b,c,d;
     
     long long int ans,temp1,temp2;
     scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
     temp1=a*b;
     temp2=c*d;
    ans=(temp1)-(temp2);
    printf("Difference = %lld",ans);
    return 0;
}