/* add.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"

int main() {
    int y;
    int x=-101;
    y = Abs(x);
    PrintNum(y);

    Halt();
    /* not reached */
}
