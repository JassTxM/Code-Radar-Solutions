#include <stdio.h>

int fibonacciSeries(int n){
    int a=0,b=1,c;
    if (n>2){
        printf("%d %d ",a,b);
    }
    for(int i = 2; i<n ; i++){
        c = a+b;
        a = b;
        b = c;
        printf("%d ",b);
    }
    
}
