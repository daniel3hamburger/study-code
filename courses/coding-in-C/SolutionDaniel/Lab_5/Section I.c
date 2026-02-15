#include <stdio.h>

int main(void) {
    int x = 42;
    int *p = &x;
    int **pp = &p;

    // TODO: complete the output statements
    printf("x = %d\n", x);
    printf("x via p = %d\n", *p);
    printf("x via pp = %d\n", *pp);
// x = 42
//p = 6291060 adress of x
//*p 42
//pp= 6291048 adress of p
//*pp = 6291060 adress of x 
// **pp= 42
    return 0;
}