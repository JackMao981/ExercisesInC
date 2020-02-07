/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int *foo() {
    int i;
    int array[SIZE];

    // printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
        array[i] = 42;
    }
    return array;
}

void bar() {
    int i;
    int array[SIZE];

    // printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
        array[i] = i;
    }
}
int main()
{
    int i;
    int *array = foo();
    bar();
    for (i=0; i<SIZE; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}


// Part 1: The program intends to make a list of size 5 and put
// 42 in all of the elements in the list.

// Part 2: The local variables have a lifetime which extends only inside the block in
// which it is defined. The moment the control goes outside the block in which
// the local variable is defined, the storage for the variable is no more
// allocated (not guaranteed). Therefore, using the memory address of the
// variable outside the lifetime area of the variable will be undefined behaviour.

// Part 3: I got segmentation fault. This is because line 18 allocates memory
// on the stack, which which will be unwound when the function returns and thus
// not safe for the calling function to access. The better way is to use
// malloc

// Part 4: I still get segmentation fault because of the previous reason.
