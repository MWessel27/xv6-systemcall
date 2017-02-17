#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"
#include "syscall.h"
#include "traps.h"
#include "memlayout.h"

void
getpid_test(void)
{
  int ppid;

  ppid = getprocs();                          // mytest1.c executes getpid() in the userspace
  printf(1, "getpstree_test = %d\n", ppid);
}

int
main(int argc, char *argv[])
{
  printf(1, "pstree test starting\n");
  getpid_test();
  exit();
}
