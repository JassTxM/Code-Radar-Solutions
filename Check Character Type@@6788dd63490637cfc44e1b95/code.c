// Your code here...
#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);

    if (a>= '0' && a<= '9'){
        printf("Digit");
    }
    else if (a >= 'A' && a>= 'Z'  || a>= 'a' && a<='z'){
        char l = (a>= 'A'&& a<= 'Z')?a+32:a;
        if (l == 'a'|| l== 'e' || l=='o' || l=='i' || l=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }else{
        printf("Special Character");
    }
    return 0;
}