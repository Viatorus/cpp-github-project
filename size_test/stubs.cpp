extern "C" {

void _exit(int /*unused*/)
{
  while (1) {
  }
}

int _getpid()
{
  return 1;
}

int _kill(int /*unused*/, int /*unused*/)
{
  return -1;
}

void* _sbrk(int /*unused*/)
{
  return 0;
}
}