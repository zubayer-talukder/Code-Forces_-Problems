#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){

    int n,count;
    scanf("%d",&n);
    char arr[n+1];
    char final[26]={0};
    scanf("%s",arr);

    for(int i=0;i<n;i++){
        
            arr[i]=tolower(arr[i]);
            final[arr[i]-'a']=1;
        
    } 
    

    count=1;
    for(int i=0;i<26;i++){
       if(final[i] ==0){
            count=0;
            break;
    }}
     if(count==0)
     {printf("NO");
     }
      else {
            printf("YES");
          
        }
        return 0;
    
}