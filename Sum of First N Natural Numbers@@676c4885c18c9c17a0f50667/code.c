// Your code here...
#include <stdio.h>

int main(){
    int n,i=1,sum;
    scanf("%d",&n);
    while(i<=n){
        sum = i + sum;
        i++;
    }
    printf("%d",sum);
    return 0;
}