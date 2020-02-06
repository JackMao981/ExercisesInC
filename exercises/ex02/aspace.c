/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

int var1;

int main ()
{
    int var2 = 5;
    void *p = malloc(128);
    char *s = "Hello, World";
    void *q = malloc(128);
    printf ("Address of main is %p\n", main);
    printf ("Address of var1 is %p\n", &var1);
    printf ("Address of var2 is %p\n", &var2);
    printf ("p points to %p\n", p);
    printf ("s points to %p\n", s);
    printf ("q points to %p\n", q); // stack grows
    void *x = malloc(16);
    void *y = malloc(16);
    printf ("r points to %p\n", x);
    printf ("s points to %p\n", y); // y - x = 256 in decimal
    return 0;
}
