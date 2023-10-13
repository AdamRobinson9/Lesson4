#include <stdio.h>

int main(){
    int numbers[5] = {3,5,6,4,6};
    int rotated[5];
    int i;

    rotated[0] = numbers[4];

    for (i = 0; i < 5; i++){
        rotated[i+1] = numbers[i];
    }
    
    for (int i=0; i<5; i++){
        printf("%d ",rotated[i]);
    }
    printf("\n");
    return 0;
}