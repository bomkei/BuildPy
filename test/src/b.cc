#include <iostream>
#include "A.h"

int aaa(int argc, char** argv) {
  auto&& vec = make_vec((char const**)argv, argc);

  for( auto&& s : vec ) {
    std::cout << s << std::endl;
  }

  return 0;
}