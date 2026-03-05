#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>//scandir inside this library

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
/*output scandir
.
..
.vscode
dictionary
dictionary.c
dictionary.py
dictionary.txt
equivalentincforpythoncode.txt
ex1.c
ex2
ex2.c
hel.c
hello
hello.c
howtoopencs50manualpgesexp.tex
linkcs50david.txt*/
