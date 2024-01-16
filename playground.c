#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int seen[255] = {0};

    if (argc == 3)
    {
        while (argv[1][i])
        {
			int character = argv[1][i];
            if (seen[character] == 0)
            {
                seen[character] = 1;
                write(1, &argv[1][i], 1);
            }
            i++;
        }
        i = 0;
        while (argv[2][i])
        {
			int character = argv[2][i];
            if (seen[character] == 0)
            {
                seen[character] = 1;
                write(1, &argv[2][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
