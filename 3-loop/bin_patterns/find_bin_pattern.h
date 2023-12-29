#include <math.h>

char find_bin_pattern(int number){
    int count = 0;
    int pattern = 0b101;

    while (number > 0) {
        if ((number & 0b111) == pattern)
            count++;
        number >>= 1;
    }

    return count;
}