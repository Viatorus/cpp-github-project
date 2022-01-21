extern "C" {
#include <stdlib.h>
#include <sys/unistd.h>

extern void _exit(int code)
{
  (void)code;
  while (1) {
  }
}

extern caddr_t _sbrk(int incr)
{
  (void)incr;
  return 0;
}
}