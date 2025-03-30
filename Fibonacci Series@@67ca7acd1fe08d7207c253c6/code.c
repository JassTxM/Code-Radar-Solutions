#include <stdio.h>

int fibo(int n){
    int a=0,b=1,c;
    printf("%d %d ",a,b);
    for(int i = 2; i<n ; i++){
        c = a+b;
        a = b;
        b = c;
    }
    return b;
}

int main(){
    int n;
    scanf("%d",&n);
    fibo(n);
}