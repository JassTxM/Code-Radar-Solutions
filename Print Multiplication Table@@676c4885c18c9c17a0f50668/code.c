// Your code here...

#include <stdio.h>

int main(){
    int n,i=1;
    scanf("%d",&n);

    while(i<=n){
        printf("%d x %d = %d",n,i,n*i);
        i++;
    }
    return 0;
}