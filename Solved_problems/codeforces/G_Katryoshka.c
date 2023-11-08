#include <stdio.h>

int main() {

   long long int eye ,mouth;
   int min,sum=0;
   long long int body;
   scanf("%lld %lld %lld",&eye,&mouth,&body);

   if(body==0 || eye==0){
       printf("0");
   }
   else if(body!=0 || eye!=0){
       
   
   {
    if(eye<=mouth && eye<=body){
       min=eye;
   }
   else if(mouth<=eye && mouth<=body){
     min=mouth;  
   }
   else {
        min=body; 
        printf("%d",body);
        return 0;
   }
       
}
{
    eye=eye-min;
    mouth=mouth-min;
    body=body-min;
    sum=min;
}

    if(mouth==0){
        eye=eye/2;
        sum=sum+eye;
    }

    else if(mouth!=0){
        eye=eye/2;
        sum=sum+eye;
    }
    printf("%d",sum);}
    return 0;
}