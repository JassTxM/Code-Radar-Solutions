# include <stdio.h>

int main(){
    int rows;
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
   
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Printing stars
        for (int j = 1; j <= (2*i-1); j++) {
            printf("*");
        }
        printf("\n");  
    }

    return 0;
}

