    #include<stdio.h>
    int main(){
    int m,n;
    scanf("%d %d",&n,&m) ;
    int arr[n+1];
    int count[m+1];
    for(int i=1;i<=m;i++)
    {
    count[i]=0;}

    for(int i=1;i<=n;i++)
    {
    scanf("%d",&arr[i]);
    count[arr[i]]++;
    }

    for(int i=1;i<=m;i++){
    printf("%d\n",count[i]);
    }

    return 0;
    }