#include <random>

#include "rng.h"

namespace rng {

  std::vector<int> rng::generateRandomIntVector(int size, int low, int high)
  {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<std::uintmax_t> dis(low, high);
    std::vector<int> list;
    for (size_t i = 0; i < size; i++) {
      list.push_back(dis(gen));
    }
    return list;
  }
}
