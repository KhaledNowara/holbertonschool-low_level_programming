#include <stdio.h>


__attribute__((constructor))
void run_before_main() {
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
