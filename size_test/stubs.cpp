extern "C" {

#include <stdlib.h>

void _exit(int /*unused*/)
{
  while (1) {
  }
}

int _getpid(void)
{
  return 1;
}

int _kill(int /*unused*/, int /*unused*/)
{
  return -1;
}

caddr_t _sbrk(int /*unused*/)
{
  return 0;
}
}