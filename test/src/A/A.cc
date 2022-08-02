#include "A.h"

std::vector<std::string> make_vec(char const** s, int count) {
  std::vector<std::string> ret;

  for( int i = 0; i < count; i++ ) {
    ret.emplace_back(s[i]);
  }

  return ret;
}