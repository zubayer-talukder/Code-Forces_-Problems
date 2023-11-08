#include<stdio.h>
int main(){

    float x,price,discount;
    scanf("%f %f",&x,&discount);
    price= (discount)/(1-(x)/100);
    printf("%.2f",price);
     
    return 0;
}