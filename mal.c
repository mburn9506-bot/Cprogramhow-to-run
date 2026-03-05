#include <stdio.h>
#include <stdlib.h>
int main(){
        int *ptr;
        int x = 278;
        ptr =(int*)malloc(sizeof(int));// allocate memory for 1 int
        if (ptr == NULL){
                printf("memory allocation failed\n");
                return 1;
        }
        *ptr = 10;
        
        *ptr = x;
        printf("Value: %d\n", *ptr);
        printf("Value1c: %d\n", x);
        free (ptr);//always free allocated memory
        return 0;
}