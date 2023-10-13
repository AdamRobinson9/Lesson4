#include <stdio.h>

int main(){
    int numbers[5] = {3,5,6,400,6};
    int i;
    int max = 0;
    for (i = 0; i < 5; i++){
        if (numbers[i] > max){
            max = numbers[i];
        }
    }
    printf("%d\n", max);
    return 0;
}