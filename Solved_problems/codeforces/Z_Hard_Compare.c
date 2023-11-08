    #include<stdio.h>
    #include<math.h>
    int main(){
    double a,b,c,d,temp1,temp2;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    temp1=b*log(a);
    temp2 =d*log(c);
    if(temp1>temp2){
        printf("YES");
    }
    else if (temp1<=temp2){
        printf("NO");
    }

        
        
        return 0;
    }