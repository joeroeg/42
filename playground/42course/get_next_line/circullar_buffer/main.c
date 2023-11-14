#include "get_next_line.h"

int main(void) {
    int fd = open("test.txt", O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }
	char *line;
    while ((line = get_next_line(fd)) != NULL &&) {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return 0;
}
