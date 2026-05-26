#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int* bad_pointer(){
    int local_var = 7;
    return &local_var;
}

int main() {

    int* ptr = bad_pointer();
    printf("Значение: %d\n", *ptr);
    
    return 0;
}
