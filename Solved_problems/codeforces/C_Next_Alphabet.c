#include<stdio.h>
int main(){

    char temp;
    scanf("%c",&temp);
    if(temp=='z'){
        printf("a");
    } 
    else if(temp!=0)
      {temp++;
        printf("%c",temp);}  
        
    return 0;
}