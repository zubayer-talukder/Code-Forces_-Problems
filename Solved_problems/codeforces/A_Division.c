#include<stdio.h>
int main(){

       int n,div;
  
    scanf("%d",&n);
    for(int i=0;i<n;i++){ 
    scanf("%d",&div);

    if(div<=1399){
        printf("Division 4\n");
    }
    else if(div<=1599 && div>=1400){
        printf("Division 3\n");

    }
    else if(div>=1600 && div<=1899){
        printf("Division 2\n");
    }
   else if(div>=1900 ){
        printf("Division 1\n");
    }
    
  
    
    }
    return 0;
}