// Your code here...
#include <stdio.h>

int main(){
    int n,max;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n;i++){
        if (arr[i]>0 && max < arr[i]){
            max = arr[i-1];
        }
        else if (n<2){
             printf("%d",-1);
        }
        // }else{
           
        // }
    }
    
    printf("%d",max);


    }