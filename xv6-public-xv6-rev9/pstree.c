#include "types.h"
#include "stat.h"
#include "user.h"
#include "uproc.h"
#define MAXPROC 64

int
main(int argc, char *argv[])
{
  struct uproc prs[MAXPROC];
  int num = getprocs(MAXPROC, prs);
  printf(1,"num = %d\n",num);
  printf(1,"process = %s\n", prs);
  int i=0;
  for(; i<num;i++){
      printf(16, prs[i].name);
  }
  printf(1, "pstree test starting\n");
  exit();
}
