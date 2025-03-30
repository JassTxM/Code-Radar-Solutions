// Your code here...

#include <stdio.h>

int main(){
    int n,ecount = 0,ocount = 0;
    scanf("%d",&n);
    int arr[n];

    for (int i = 0; i<n ; i++){
        scanf("%d",&arr[n]);
    }

    for (int i = 0 ; i<n ; i++){
        if(arr[i] == 1){
            ocount++;
        }

        if(arr[i]%2 == 0){
            ecount++;
        }
        else{
            ocount++;
        }
    }

    printf("%d %d",ecount,ocount);
}