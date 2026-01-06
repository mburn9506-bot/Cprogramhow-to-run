// # include <stdio.h>
// int main(){
//         int age = 26;
//         printf("%p", &age);
//         return 0;
// }
#include <stdio.h>

void print(const char *msg) {
    printf("%s\n", msg);
}

int main() {
        
        print("Hello");
        return 0;
}
// cli:➜ two steps to run it 
// myPROJECTR clang main.c -o main
// ➜  myPROJECTR ./main
// Hello
// ➜  myPROJECTR 