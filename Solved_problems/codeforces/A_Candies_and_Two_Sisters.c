#include<stdio.h>
int main(){

    int n;
    long long int candles;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&candles);
        if(candles%2==0 ){
            printf("%lld\n",(candles/2)-1);

        }
        else if(candles%2==1){
            printf("%lld\n",candles/2);
        }
    } 
     
    return 0;
}