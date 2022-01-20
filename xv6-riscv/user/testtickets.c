#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fs.h"

int
main(int argc, char *argv[])
{
  int tickets = 5;
  if (settickets(tickets)!= 0)
  {
    printf("Sys call error: %d\n", tickets);
  }else printf("Successfull sys call...\n"); 
  exit(0);
}
