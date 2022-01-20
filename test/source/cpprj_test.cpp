#include "cpprj/cpprj.hpp"

auto main() -> int
{
  auto result = name();

  auto f = new int();

  return result == "cpprj" ? 0 : 1;
}
