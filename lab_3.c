#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void heap_demo() {
    char *buf = (char*)malloc(sizeof(char) * 100);
    if (!buf){
        return;
    }

    strcpy(buf, "hello world");
    
    printf("1: %s\n", buf);
    
    free(buf);
    
    printf("2: %s\n", buf);
    
    char *buf2 = (char*)malloc(sizeof(char) * 100);
    if (!buf2){
        return;
    }
    
    strcpy(buf2, "hello world");
    
    printf("3: %s\n", buf2);
    
    char *mid = buf2 + 50;
    
    free(mid);
    
    printf("4: %s\n", buf2);
}

int main() {
    
    heap_demo();
    
    return 0;
}