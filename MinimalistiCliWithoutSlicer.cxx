
#include "MinimalistiCliWithoutSlicerCLP.h"

// STD includes
#include <iostream>

int main( int argc, char * argv[] )
{
  PARSE_ARGS;
  std::cout << leftoperand + rightoperand << std::endl;
  return EXIT_SUCCESS;
}
