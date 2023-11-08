#include<stdio.h>
#include<limits.h>
int main(){

    int n;
    int i=0;
    scanf("%d",&n);
   int arr[n];
    for(i;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    int mn=INT_MAX;
    int pos;
    for(i=0;i<n;i++){
        if(arr[i]<mn){
            mn=arr[i];
            pos=i+1;
        }
    }
    printf("%d %d",mn,pos);
     
    return 0;
}