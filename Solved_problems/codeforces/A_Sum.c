#include<stdio.h>
int main(){

    int n,a,b,c;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){\
    scanf("%d %d %d",&a,&b,&c);
        if(((a+b)==c)||((a+c)==b)|| ((b+c)==a)){
                printf("YES\n");
        }
        else 
            printf("NO\n");
    }
    return 0;
}