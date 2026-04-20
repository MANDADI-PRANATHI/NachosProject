#include "syscall.h"
int bigArray[3000];
int main()
{
   int i;
   for(i=0;i<3000;i++)
      bigArray[i]=i;
   for(i=0;i<3000;i++) {
      PrintNum(bigArray[i]);
      PrintChar(' ');
   }
   PrintString("\n\nTotal Page Faults: ");
   PrintNum(GetPageFaults());
   PrintChar('\n');
   Exit(0);
}