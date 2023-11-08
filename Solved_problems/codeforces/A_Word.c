#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

    char word[101];
    scanf("%s",word);
    
    int lower=0,upper=0;
    
    for(int i=0;i<strlen(word);i++){
        if(word[i]>='a' && word[i]<='z'){
            lower++;
        }
        else if(word[i]>='A' && word[i]<='Z')
          {  upper++;
         }
        
    }

        if(upper>lower){
           for(int i=0;i<strlen(word);i++){
            word[i]= toupper(word[i]);
           }
        }
        else {
            for(int i=0;i<strlen(word);i++){
                word[i]=tolower(word[i]);
            }
        }
     printf("%s\n",word);
     
    return 0;
}