#include <stdio.h>

int main() {
    // The line that corresponds to x = 5 is:
    // movl	$5, -4(%rbp)
    // If optimization is turned on, the line int x = 5 which is never used anywhere else,
    // is not in the assembly code
    int x = 5;
    int y = x + 1;
    printf("%i",y);
    return 0;
    // From what I experienced, optimization ignores values that are only declared and not used.
    // However, if a declaration refers to another declared variable, then both are retained.
}
