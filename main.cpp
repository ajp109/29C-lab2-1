#include "mbed.h"

int main() {

    int array[10];

    array[4] = 5;

    printf("The value stored in array[4] is %d\n", array[4]);

    // Do not allow main() to end
    while (true) {
        sleep();
    }
}
