#pragma once

#include <string>

int* g;

/**
 * @brief Return the name of this header-only library
 */
inline auto name() -> std::string
{
  return "cpprj";
}
