// Your code here...
#include <stdio.h>

int main(){
    int n,max;
    scanf("%d",&n);
    int arr[n];

    max = arr[0];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if ( max < arr[i]){
            max = arr[i];
        }
    }
    
    printf("%d",max);


    }