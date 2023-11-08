#include<stdio.h>
int main(){

    int t,temp;
    scanf("%d",&t);
    long long a,b;
    for(int i=0;i<t;i++){
        scanf("%lld %lld",&a,&b);
        if(a%b==0){
            printf("0\n");
        }
        else 
            {
                temp=b-(a%b);
                printf("%d\n",temp);
            }
        }

    return 0;
}