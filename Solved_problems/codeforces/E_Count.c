#include<stdio.h>
#include<string.h>
int main(){

    char x[1000001];
    
    
    gets(x);
    int sum=0;
    for(int i=0;i<strlen(x);i++){
        sum=sum+(x[i]-'0');
    } 
     printf("%d",sum);
    return 0;
}