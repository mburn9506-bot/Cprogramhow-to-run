#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main() {
    struct dirent **namelist;
    int n = scandir(".", &namelist, NULL, alphasort);

    if (n < 0) {
        perror("scandir");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%s\n", namelist[i]->d_name);
        free(namelist[i]);
    }

    free(namelist);
    return 0;
}

