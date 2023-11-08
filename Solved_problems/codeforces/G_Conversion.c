#include<stdio.h>
#include<string.h>
int main(){

    char w[100001];
    gets(w);
    for(int i=0;i<100001;i++){
    if(w[i]==',')
    {
        w[i]=' ';
    } 
    else if((w[i]>='a') &&(w[i]<='z') ){
        w[i]=w[i]-32;
    }
    else if((w[i]>='A') && (w[i]<='Z'))
    {
        w[i]=w[i]+32;
    }
      
  
    }
    for(int j=0;j<strlen(w);j++){
    printf("%c",w[j]);
    }
    return 0;
}