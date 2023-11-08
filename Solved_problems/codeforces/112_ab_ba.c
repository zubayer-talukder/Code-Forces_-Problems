#include<math.h>
#include<stdio.h>
int main(){

 int a,b;

scanf("%d %d",&a,&b);

double result,temp,temp2;

temp=pow(a,b);

temp2=pow(b,a);

result=temp-temp2;

printf("%d",(int)result);
     
     
    return 0;
}