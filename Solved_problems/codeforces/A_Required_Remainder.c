#include<stdio.h>
#include<math.h>
int main(){

     int t,x,y,n,k,temp;
  
    scanf("%d",&t);
    for(int i=0;i<t;i++){ 
    scanf("%d %d %d",&x,&y,&n);
    temp=floor((n-y)/x);
    k=(temp*x)+y;
    printf("%d\n",k);
    } 
     
    return 0;
}