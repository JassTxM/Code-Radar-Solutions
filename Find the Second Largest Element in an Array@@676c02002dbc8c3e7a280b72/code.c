// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    int max;
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if ( max < arr[i]){
            max = arr[i-1];

        }
        
        if (max> arr[i]){
            max = arr[0+i];
        }
    }
    
    printf("%d",max);


    }