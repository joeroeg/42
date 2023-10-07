#include <unistd.h>

void print_bits(unsigned char octet) {
    int i;
    for (i = 7; i >= 0; i--) {
        char bit = (octet & (1 << i)) ? '1' : '0';
        write(1, &bit, 1);
    }
}
