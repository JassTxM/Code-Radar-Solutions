// Your code here...
#include <stdio.h>

int main(){
    int n,max;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j = -1;
    for (int i=0;i<n;i++){
        if (n<2){
            printf("%d",j);
        }
        else if (max < arr[i]){
            max = arr[i-1];
        }
    }
    
    printf("%d",max);


    }