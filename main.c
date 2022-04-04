#include <stdio.h>
#include <stdlib.h>
#include "./max.h"
#include "./min.h"
#include "./find.h"

int main(){
    int array[] = {23, 3564, 32, 345};
    int len = sizeof(array)/ sizeof(int);
    int max = maximo(array, len);
    int min = mini(array, len);
    int num= 0;

    printf("MAX:\t%d\n", max);
    printf("MIN:\t%d\n", min);
    printf("TYPE THE NUMBER: \n");
    scanf("%d", &num);
    int find = search(array, len, num);
    if (find == -1){
        printf("THE NUMBER IS NOT IN THE ARRAY\n");

    }
    else{
        printf("THE NUMER IS AT POSITION: %d \n", find);
    }

    return 0 ;
}