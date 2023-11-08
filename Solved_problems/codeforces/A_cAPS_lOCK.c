#include<stdio.h>
#include<string.h>
int main(){

    char word[101];
    scanf("%s",word); 
    int x=strlen(word),flag=1;
    for(int i=1;i<x;i++){
        if(word[i]>='a'&&word[i]<='z'){
            flag=0;
            break;
        }
    }

    if(flag||x==1&&(word[0])>='a'&&word[0]<='z'){
for(int p=0;p<x;p++){
    if(word[p]>='a'&&word[p]<='z'){
        word[p]-=32;
    }
    else {
        word[p]+=32;
    }
}
    }
    printf("%s",word);
   return 0;
}


















    // for(int y=1;y<x;y++){
    //    if((word[i])>='a'&&(word[i])<='Z'){
    //     flag=1;

    //    }
    // }
    // if(flag||((word[0]>='a')&&(word[0]<='z'))){
    //     word[0]=word[0]-32;
        
    // }
    // for(int i=1;i<x;i++){
    //     if((word[i]>='A')&&(word[i]<='Z')){
    //         word[i]=word[i]+32;
    //     }
        
    // }
    // for(int i=0;i<x;i++){
    //     printf("%c",word[i]);
    // }
     
 