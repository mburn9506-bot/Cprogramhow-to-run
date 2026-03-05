// # include <stdio.h>
// int main(){
//         for (int i = 0; i < 4;i++){
//                  printf("?");
//         }
//         printf("\n");// you can put this statement outside the loop to dont print % on end of line
// }
///////////////////////
// # include <stdio.h>
// int main(){
//         for (int i = 0; i < 4;i++){
//                  printf("#\n");
//         }

// }
/////////////////////////////
// # include <stdio.h>
// int main(){
//         for (int row = 0; row < 3;row++){
//                 for (int column = 0; column < 3;column++){
//                         printf("#");
//                 }
//                 printf("\n");
//         }
//         /*
// output:
// ###
// ###
// ###*/
// }
# include <stdio.h>
int main(){
        const int n = 3;//can not be change the value the compiler wont let you make change to value
        for (int row = 0; row < n; row++)
        {
                for (int column = 0; column < n;column++){
                        printf("#");
                }
                printf("\n");
        }
        /*
output:
###
###
###*/
}