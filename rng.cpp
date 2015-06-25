#include <random>
#include <chrono>

#include "rng.h"

namespace rng {

  int rng::generateRandomNumber(int low, int high)
  {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine generator (seed);
    std::uniform_int_distribution<int> distribution(low, high);
    return distribution(generator);
  }
}
