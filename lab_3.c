#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define SUCCESS 0

#define OFFSET 50
#define NUM_OF_CHARS 100

void heap_demo() {
    char *buf = (char*)malloc(sizeof(char) * NUM_OF_CHARS);
    if (!buf){
        printf("Не удалось выделить память для buf\n");
        return;
    }

    strcpy(buf, "hello world");
    
    printf("1: %s\n", buf);
    
    free(buf);
    
    printf("2: %s\n", buf);
    
    char *buf2 = (char*)malloc(sizeof(char) * NUM_OF_CHARS);
    if (!buf2){
        printf("Не удалось выделить память для buf2\n");
        return;
    }
    
    strcpy(buf2, "hello world");
    
    printf("3: %s\n", buf2);
    
    char *mid = buf2 + OFFSET;
    
    free(mid);
    
    printf("4: %s\n", buf2);
}

int main() {
    
    heap_demo();
    
    return SUCCESS;
}
