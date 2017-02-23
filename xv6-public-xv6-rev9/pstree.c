#include "types.h"
#include "stat.h"
#include "user.h"
#include "uproc.h"
#define MAXPROC 64

int
main(int argc, char *argv[])
{
  struct uproc *prs = malloc(MAXPROC*sizeof(struct uproc));
  int num = getprocs(MAXPROC, prs);
  int i=0;
  for(; i< num; i++) {
    printf(1, "%s[%d] \n", prs[i].name, prs[i].pid-1);
  }

  exit();
}
