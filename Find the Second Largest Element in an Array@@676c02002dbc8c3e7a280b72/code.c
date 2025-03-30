// Your code here...
#include <stdio.h>

int main(){
    int n,max;
    scanf("%d",&n);
    int arr[n];
    char j = "-1";
    if (n<2){
        printf("%c",j);
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