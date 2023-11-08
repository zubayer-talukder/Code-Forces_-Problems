#include<stdio.h>
int main(){

    int x;
    
    for(;scanf("%d",&x)!=EOF;){
        if(x==1999){
            printf("Correct");
            break;
        }
        else if(x!=1999)
            printf("Wrong\n");
    } 
     
    return 0;
}