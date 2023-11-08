#include<stdio.h>
#include<string.h>
int main(){
char x[1000001];
fgets(x,1000001,stdin);
int i=0;
while(x[i]!='\\'){
printf("%c",x[i]);
i++;
}
     
     
    return 0;
}