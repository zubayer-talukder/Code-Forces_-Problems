#include<stdio.h>
#include<string.h>
int main (){
char str1[11],str2[11];
scanf ("%s%s", str1,str2);
int dig1=strlen(str1);
int dig2=strlen(str2);
char word[23];
strcpy(word, str1);
strcat(word, str2);
char temp=str1[0];
str1[0]=str2[0];
str2[0]=temp;
printf("%d %d\n%s\n%s %s",dig1,dig2,word,str1,str2);
return 0;
}