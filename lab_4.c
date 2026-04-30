#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int global_init = 100;          // (data)
int global_uninit;              // (bss)
const int global_const = 200;   // (rodata)

int main() {
    int local_var = 10;                // (stack)
    static int static_local_init = 20; // (data)
    static int static_local_uninit;    // (bss)
    const int local_const = 30;        // (stack)
    
    const char *str_literal = "Hello"; // (rodata)
    
    printf("PID процесса: %d\n", getpid());
    printf("Нажмите Enter, чтобы продолжить...");
    getchar();
    
    printf("\nАдреса переменных:\n");
    printf("global_init (иниц. глоб.) = %p\n", (void*)&global_init);
    printf("global_uninit (неиниц. глоб.) = %p\n", (void*)&global_uninit);
    printf("global_const (глоб. конст.) = %p\n", (void*)&global_const);
    printf("static_local_init (стат. иниц.) = %p\n", (void*)&static_local_init);
    printf("static_local_uninit (стат. неиниц.) = %p\n", (void*)&static_local_uninit);
    printf("local_var (локальная) = %p\n", (void*)&local_var);
    printf("local_const (лок. конст.) = %p\n", (void*)&local_const);
    printf("str_literal (указатель на строку) = %p\n", (void*)&str_literal);
    printf("сама строка (данные) = %p\n", (void*)str_literal);

    char* val = getenv("MY_VAR");
    printf("Before: %s\n", val);

    setenv("MY_VAR", "world", 1);

    val = getenv("MY_VAR");
    printf("After: %s\n", val);
    
    return 0;
}