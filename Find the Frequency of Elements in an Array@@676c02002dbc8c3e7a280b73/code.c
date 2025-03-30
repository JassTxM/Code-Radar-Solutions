// Your code here...
#include <stdio.h>

int main(){
    int n,count=1;
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for (int i = 0 ; i< n ; i++){
        if (i<n-1 && arr[i] == arr[i+1]){
            count++;
        }else{
            printf("%d %d\n", arr[i],count);
            count = 1;
        }
    }
}