#include<stdio.h>
int main(){

     long long int n;
     int val=0;
     scanf("%lld",&n);
     char arr[n];
     scanf("%s",arr);
     for(int i=0;i<n;i++){

        val+=arr[i]-'0';
     }
    
     
     printf("%d",val);
    return 0;
}