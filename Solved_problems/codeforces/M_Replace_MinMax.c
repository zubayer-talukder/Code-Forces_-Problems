    #include<stdio.h>
    int main()
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
         int min=arr[0];
         int max=arr[0];
        int min_ind=0,max_ind=0;
        
    for(int i=1;i<n;i++){

         if(min>arr[i]){
            min=arr[i];
            min_ind=i;
        }

        if(max<arr[i]){
            max=arr[i];
            max_ind=i;
        }
    }
    arr[min_ind]=max;
    arr[max_ind]=min;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;}