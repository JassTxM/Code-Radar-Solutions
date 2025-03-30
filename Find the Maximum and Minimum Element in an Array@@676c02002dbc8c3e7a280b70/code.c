// Your code here...
# include <stdio.h>

int main(){
    int n,arr[n];
    scanf("%d",&n);
    for (int i; i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i; i<n;i++){

        if (max < arr[i]){
          max = arr[i];
        }

        if (min > arr[i]){
            min = arr[i];
        }
    }

    printf("%d",max);
    printf("%d",min);




}