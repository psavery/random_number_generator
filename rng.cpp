#include <random>

#include "rng.h"

namespace rng {

  int rng::generateRandomNumber(int low, int high)
  {
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(low, high);
    return distribution(generator);
  }
}
