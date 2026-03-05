#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main() {
    struct dirent **namelist;
    int n;

    // Scan current directory
    n = scandir(".", &namelist, NULL, alphasort);

    if (n < 0) {
        perror("scandir");
        return 1;
    }

    // Print file names
    for (int i = 0; i < n; i++) {
        printf("%s\n", namelist[i]->d_name);
        free(namelist[i]);   // free each entry
    }

    free(namelist);  // free the list
    return 0;
}
