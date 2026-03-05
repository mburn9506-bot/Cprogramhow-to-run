#include <stdio.h>

// int main(void)
// {
//     FILE *file = fopen("ex3.c", "w");
//     if (file != NULL)
//     {
//         fprintf(file, "This is trial\n");
//         fclose(file);
//     }
// }
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int fd = open("hel.txt", O_RDONLY);

    if (fd == -1)
    {
        perror("open failed");
        return 1;
    }

    printf("File opened successfully\n");

    close(fd);
}