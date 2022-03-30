#include <stdio.h>
#include <stdlib.h>
#include "./max.h"
#include "./min.h"

int main(){
    int array[] = {2, 3564, 32, 345};
    int len = sizeof(array)/ sizeof(int);
    int max = maximo(array, len);
    int min = mini(array, len);
    printf("MAX:\t%d\n", max);
    printf("MIN:\t%d\n", min);

    return 0 ;
}