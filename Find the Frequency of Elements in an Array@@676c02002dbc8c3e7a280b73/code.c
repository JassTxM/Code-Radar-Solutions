// Your code here...
#include <stdio.h>

int main(){
    int n,count=1;
    scanf("%d",&n);
    int arr[n];
    int visit[n];

    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for (int i = 0 ; i<n ; i++){
        if (visit[i] == 1){
            continue;
        }
    }

    for (int i = 0 ; i< n ; i++){
        if (i<n-1 && arr[i] == arr[i+1]){
            count++;
            visit[i] = 1;
        }else {
            printf("%d %d\n", arr[i],count);
            count = 1;
        }
    }
}