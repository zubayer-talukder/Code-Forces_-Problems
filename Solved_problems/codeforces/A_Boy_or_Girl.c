 #include<stdio.h>
#include<string.h>
int main(){


    int i,j,a,q=0;
    char s[100];
    scanf("%s",&s);
    a=strlen(s);
    
    for(j=0;j<a;j++){
        for(i=j+1;i<a;i++){
            if(s[j]==s[i]){
                s[j]='0';
            }
        }
    } 
    for(i=0;i<a;i++){
        if(s[i]!='0'){
            q++;
    }
    }
    if((q%2)==0){
        printf("CHAT WITH HER!");
    }
    else 
        printf("IGNORE HIM!");
    return 0;
}