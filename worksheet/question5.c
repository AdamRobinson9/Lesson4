#include <stdio.h>

int main(){
    int numbers[6] = {3,5,6,4,6,3};
    int i;
    int j;

    for (i = 0; i < 6; i++){
        for (j=0; j<6; j++){
            if(numbers[i] == numbers[j] && i != j){
                printf("%d\n", numbers[i]);
            }
        }
    }
    return 0;
}