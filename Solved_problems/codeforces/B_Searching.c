#include <stdio.h>
int main()
{

int n, a,ans=-1;
    scanf("%d",&n );
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d",& a);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            ans=i;
            break;
        }
       
        
    }
printf("%d",ans);
    return 0;
}