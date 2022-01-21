#include <string>

int main(int argc, const char* argv[])
{
  std::string s {argv[argc - 1]};
  return s.size();
}
