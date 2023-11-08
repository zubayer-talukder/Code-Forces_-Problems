#include <stdio.h>
int main() {
    double n, k, a;
 
    scanf("%lf %lf %lf", &n, &k, &a);
 
 
    double q = (k * n) / a;
	long long  x = q; 
    double test = q - x; 
 
 
 
    if (test > 0) {
		printf("double\n");
    }
 
     else if (x > 2147483647) {
		printf("long long\n");
    }
 
    else {
        printf("int\n");
    }
 
    return 0;
}