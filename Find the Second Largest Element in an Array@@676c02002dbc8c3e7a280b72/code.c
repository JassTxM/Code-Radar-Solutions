// Your code here...
#include <stdio.h>

int main(){
    int n,max;
    scanf("%d",&n);
    int arr[n];

    max = arr[0];
    
    int j = -1;
    if (n<2){
        printf("%d",-1);
        }
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
       
        if ( max < arr[i]){
            max = arr[i-1];
        }
    }
    
    printf("%d",max);


    }