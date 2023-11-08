#include<stdio.h>
int main(){

    int a,temp1,temp2;
    scanf("%d",&a);
    temp1=a/10;
    temp2=a%10;
    
    if((a%10)==0){
        printf("YES");
    }
    else if((temp1%temp2==0)||(temp2%temp1==0))
    {
        printf("YES");
    }
    else 
        printf("NO");
     
    return 0;
}