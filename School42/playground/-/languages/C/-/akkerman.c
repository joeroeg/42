#include <stdio.h>

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    int m = 3;
    int n = 4;
    int result = ackermann(m, n);
    printf("A(%d, %d) = %d\n", m, n, result);
    return 0;
}
