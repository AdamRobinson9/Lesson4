#include <stdio.h>

int main(){
    int numbers[5] = {3,5,6,4,6};
    int i;
    int sum = 0;
    for (i = 0; i < 5; i++){
        sum = sum + numbers[i];
    }
    printf("%d\n", sum);
    return 0;
}