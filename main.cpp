#include <iostream>

#include "rng.h"

int main()
{
  std::cout << rng::rng::generateRandomNumber(0, 10000);
}

