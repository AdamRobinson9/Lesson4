#include <stdio.h>

int main(){
    int numbers[5] = {3,5,6,4,6};
    int i;
    for (i = 4; i >= 0; i--){
        printf("%d\n", numbers[i]);
    }
    
    return 0;
}