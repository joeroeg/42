#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


// Get size of statically allocated array
#define ARR_LEN(ARR) (sizeof ARR / sizeof *ARR)
// Generate random number in the interval [M,N]
#define RAND_RNG(M,N) (M + rand() / (RAND_MAX / (N - M + 1) + 1));

static void swap(unsigned *a, unsigned *b) {
    unsigned tmp = *a;
    *a = *b;
    *b = tmp;
}

/* sort unsigned ints */
static void rad_sort_u(unsigned *from, unsigned *to, unsigned bit)
{
	if (!bit || to < from + 1) return;

	unsigned *ll = from, *rr = to - 1;
	for (;;) {
		/* find left most with bit, and right most without bit, swap */
		while (ll < rr && !(*ll & bit)) ll++;
		while (ll < rr &&  (*rr & bit)) rr--;
		if (ll >= rr) break;
		swap(ll, rr);
	}

	if (!(bit & *ll) && ll < to) ll++;
	bit >>= 1;

	rad_sort_u(from, ll, bit);
	rad_sort_u(ll, to, bit);
}

/* sort signed ints: flip highest bit, sort as unsigned, flip back */
static	void radix_sort(int *a, const size_t len)
{
	size_t	i;
	unsigned *x = (unsigned*) a;

	for (i = 0; i < len; i++)
		x[i] ^= INT_MIN;

        rad_sort_u(x, x + len, INT_MIN);

        for (i = 0; i < len; i++)
            x[i] ^= INT_MIN;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <numbers>\n", argv[0]);
        return 1;
    }

    size_t len = argc - 1;
    int x[len];

    for (size_t i = 0; i < len; i++) {
        x[i] = atoi(argv[i + 1]);
        printf("%d ", x[i]);
    }
    printf("\n");

    radix_sort(x, len);

    for (size_t i = 0; i < len; i++) {
        printf("%d%c", x[i], i + 1 < len ? ' ' : '\n');
    }

    return 0;
}
