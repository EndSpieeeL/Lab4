#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define REWRITE 1
#define DO_NOT_REWRITE 0

#define SUCCESS 0

int main() {

    char* val = getenv("MY_VAR");
    printf("Before: %s\n", val);

    setenv("MY_VAR", "world", REWRITE);

    val = getenv("MY_VAR");
    printf("After: %s\n", val);
    
    return SUCCESS;
}
