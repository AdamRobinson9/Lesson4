#include <stdio.h>

int main(){
    int array1[3] = {1,2,3};
    int array2[3] = {4,5,6};
    int concatarray[6];
    int i;
    for (i = 0; i < 6; i++){
        if (i<3){
            concatarray[i] = array1[i];
        }
        else{
            concatarray[i] = array2[i-3];
        }
    }
    int count;
    for (count = 0; count < 6; count++){
        printf("%d ", concatarray[count]);
    }
    printf("\n");
    return 0;
}