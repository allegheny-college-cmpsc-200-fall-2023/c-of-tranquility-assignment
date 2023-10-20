#include <stdio.h>

#include "pico/stdlib.h"

int ndown(int count, int increment) {
    return count - increment;
}

int main(void) {
    stdio_init_all();
    int count = 10;
    while (count > 0){
        printf("%d\n", count);
        count = ndown(count, 2);
    }
    printf("LIFTOFF!");
    return 0;
}