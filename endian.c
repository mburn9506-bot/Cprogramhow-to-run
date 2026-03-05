
// #include <stdio.h>

// int main() {
//     int x = 1;
//     char *p = (char*)&x;

//     if (*p == 1)
//         printf("Little Endian\n");
//     else
//         printf("Big Endian\n");

//     return 0;
// }
#include <stdio.h>

int main() {
    int x = 0x12345678;
    char *p = (char*)&x;

    for (int i = 0; i < sizeof(int); i++) {
        printf("%02x ", (unsigned char)p[i]);
    }

    return 0;
}