/* exec.c
 *	Simple program to test the exec system call.
 */

#include "syscall.h"
#define stdin 0
#define stdout 1

int main() {
    int pid,pid2,pid3;
    int i,j;
    pid = Exec("../test/add");
    pid2 = Exec("../test/add2");
    //pid3=Exec("../test/sleepTest");
    if (pid < 0) {
        Write("Exec failed: ", 14, stdout);
        PrintNum(pid);
    } else{
         for(i=0;i<10;i++)
         {
                 for(j=0;j<200000;j++);
                 PrintString("In Parent\n");
         }
    }

        Join(pid);
        Join(pid2);
        //Join(pid3);
}
