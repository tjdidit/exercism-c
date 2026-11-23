#include "collatz_conjecture.h"

int steps(int start) {
    int steps_taken = 0;
    while(start != 1) {
        if(start <= 0) return -1;
        if(start % 2 == 0) {
            start /= 2;
        } else {
            start = (start * 3) + 1;
        }
        steps_taken += 1;
    }
    return steps_taken;
} 