#include "stdint.h"
#include "stdio.h"

void _cdecl cstart_(){
    puts("Kernel Succesfully Loaded\x0D\x0A");
    puts("Hello World from C!\x0D\x0A");

    printf("formatted: %% %c %s\r\n", 'f', "hello");
    printf("%d,%i, %x, %p, %ld", 1234, -2134, 0x1a, 0x3a, -1000000000l);
}
