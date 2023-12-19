<<<<<<< HEAD
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y)
{
    while (y != 0)
    {
        int temp = x;
        y = x % y;
        x = temp;
    }
    return x;
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        int x = atoi(argv[1]);
        int y = atoi(argv[2]);
        printf("%d", gcd(x, y));
    }
    printf("\n");
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Allocation {
    void *pointer;
    size_t size;
    const char *file;
    int line;
} Allocation;

#define MAX_ALLOCATIONS 1024
Allocation allocations[MAX_ALLOCATIONS];
int allocation_count = 0;

void* custom_malloc(size_t size, const char *file, int line) {
    void *ptr = malloc(size);
    if (ptr && allocation_count < MAX_ALLOCATIONS) {
        allocations[allocation_count++] = (Allocation){ptr, size, file, line};
    }
    return ptr;
}

void custom_free(void *ptr) {
    for (int i = 0; i < allocation_count; i++) {
        if (allocations[i].pointer == ptr) {
            allocations[i] = allocations[--allocation_count];
            break;
        }
    }
    free(ptr);
}

void check_for_memory_leaks() {
    if (allocation_count > 0) {
        printf("Memory leak detected:\n");
        for (int i = 0; i < allocation_count; i++) {
            printf("Leak %d: Size: %zu, Allocated at %s:%d\n",
                   i+1, allocations[i].size, allocations[i].file, allocations[i].line);
        }
    } else {
        printf("No memory leaks detected.\n");
    }
}

#define malloc(size) custom_malloc(size, __FILE__, __LINE__)
#define free(ptr) custom_free(ptr)

// Example Usage
int main() {
    int *array = malloc(sizeof(int) * 10);
	// free(array);
    // Intentionally not freeing 'array' to simulate memory leak
    check_for_memory_leaks();
    return 0;
>>>>>>> de4b1dd2a3531f451d8d27018ae4d304d2984c42
}
