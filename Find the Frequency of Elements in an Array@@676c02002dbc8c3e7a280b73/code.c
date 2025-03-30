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
        count = 1;
        for (int j = i+1 ; j< n ; j++){
            if (arr[j] == arr[j+1]){
                count++;
                visit[j] = 1;

                }
            }
        printf("%d %d\n",arr[i],count);
    }

}