// Your code here...
#include <stdio.h>

int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];

    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for (int i = 0 ; i< n ; i++){
        if (arr[i] == arr[i]){
            count++;
        }
        
    }
    printf("%d %d", arr[i],count);
    count = 0;
}