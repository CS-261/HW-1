/* CS261- HW1 - Program1.c*/
/* Name: Austin Chayka
 * Date: 1.8.2020
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>

int foo(int* a, int* b, int c){
    /* Increment a */
    a = a + 1;
    /* Decrement  b */
    b = b - 1;
    /* Assign a-b to c */
    c = a - b;
    /* Return c */
    return c;
}

int main(){
    /* Declare three integers x,y and z and initialize them randomly to values in [0,10] */
    int x = rand() % 11, y = rand() % 11, z = rand() % 11;
    /* Print the values of x, y and z */
    printf("x = %i, y = %i, z = %i\n", x, y, z);
    /* Call foo() appropriately, passing x,y,z as parameters */
    int w = foo(&x, &y, z);
    /* Print the values of x, y and z */
    printf("x = %i, y = %i, z = %i\n", x, y, z);
    /* Print the value returned by foo */
    printf("return value = %i\n", w);
    /* Is the return value different than the value of z?  Why? */
    printf(w == z ? "the return value is the same as z" : "the return value is different from z");
    return 0;
}
    
    
