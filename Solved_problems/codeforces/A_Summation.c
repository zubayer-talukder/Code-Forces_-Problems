#include<stdio.h>
int main(){

   long long int n,sum=0;
    scanf("%lld",&n);
    long long int arr[n]; 
     for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
        sum+=arr[i];
     }
     if(sum>=0){
        
        printf("%lld",sum);
     }
     else{sum=sum*-1;
        printf("%lld",sum);
     }
     
    return 0;
}