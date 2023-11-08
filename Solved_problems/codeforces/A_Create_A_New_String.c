#include<stdio.h>
#include<string.h>
int main(){

    char word1[1001],word2[1001];
    int ping1,ping2;
    gets(word1);
    gets(word2);
    ping1=strlen(word1);
    ping2=strlen(word2);
    printf("%d %d\n",ping1,ping2);
    printf("%s %s",word1,word2);


     
    return 0;
}