#include<stdio.h>
#include<string.h>
int main(){

     char word1[21],word2[21];
     scanf("%s %s",word1,word2);
     
     int value ;
     value= strcmp(word1,word2);

     if(value==-1){
        printf("%s",word1);
     }
     else if(value==1){
        printf("%s",word2);
     }
     else if(value==0){
        printf("%s",word1);
     }
   
    return 0;
}