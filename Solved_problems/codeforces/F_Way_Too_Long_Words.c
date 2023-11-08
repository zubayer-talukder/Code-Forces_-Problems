#include<stdio.h>
#include<string.h>
int main(){

    int n;
    scanf ("%d",&n);
    
   
      char word[101];
   for(int p=0;p<n;p++)
   {
    scanf("%s",word);
    int x;
    x=strlen(word);
    
 
    if(x>10){
        printf("%c%d%c\n",word[0],x-2,word[x-1]);
    }  
    else {
        
        printf("%s\n",word);
    
     }
   }
    
    return 0;
}