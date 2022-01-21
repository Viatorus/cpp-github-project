#include <stdlib.h>
#include <sys/unistd.h>

int _exit(int code)
{
  (void)code;
}

caddr_t _sbrk(int incr)
{
  (void)incr;
  return 0;
}
