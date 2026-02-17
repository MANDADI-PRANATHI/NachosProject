/* exec.c
 *	Simple program to test the exec system call.
 */

#include "syscall.h"
#define stdin 0
#define stdout 1

int main() {
    int pid;
    int i,j;
    PrintString("In parent\n");
    pid = Exec("../test/add");
    if (pid < 0) {
        Write("Exec failed: ", 14, stdout);
        PrintNum(pid);
    } else{
         for(i=0;i<1000;i++)
         {
                 for(j=0;j<200000;j++);
                 PrintString("In Parent\n");
         }
    }

        Join(pid);
}
