#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define VAL 7
#define SUCCESS 0

int* bad_pointer(){
    int local_var = VAL;
    return &local_var;
}

int main() {

    int* ptr = bad_pointer();
    printf("Значение: %d\n", *ptr);
    
    return SUCCESS;
}
