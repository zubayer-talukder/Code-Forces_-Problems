#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){

    char a[1001];
    gets(a);
    int i=0,x,j;
    x=strlen(a);
    
    while(i<x){
        if(a[i]!=a[x-1]){
            printf("NO");
            exit(0);
        }
        
        i++;
        x--;
    } 
      printf("YES");
           
        
    return 0;
}