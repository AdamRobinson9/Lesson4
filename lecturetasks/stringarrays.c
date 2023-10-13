#include<stdio.h>

int main(){
    char word[] = "hello";

    int i;

    for (i = sizeof(word)-1; i >= 0; i--){
        printf("%c\n", word[i]);
    }
    
    return 0;
}