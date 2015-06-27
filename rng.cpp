#include <random>

#include "rng.h"

std::vector<int> rng::generateRandomIntVector(int size, int low, int high)
{
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<std::uintmax_t> dis(low, high);
  std::vector<int> list;
  list.reserve(size);
  for (size_t i = 0; i < size; i++) {
    list.push_back(dis(gen));
  }
  return list;
}

std::vector<double> rng::generateRandomDoubleVector(int size, double low,
                                                    double high)
{
  int truncatedLow = int(low);
  int truncatedHigh = int(high);

  if (truncatedHigh == truncatedLow) {
    std::vector<double> vector;
    vector.reserve(size);
    for (auto i = 0; i < size; i++) {
      vector.push_back(double(truncatedLow));
    }
    return vector;
  }

  std::vector<int> vector1 = rng::generateRandomIntVector(size, truncatedLow,
                                                          truncatedHigh - 1);
  std::vector<int> vector2 = rng::generateRandomIntVector(size, 0,
                                                          999999999);
  std::vector<double> vector3;
  vector3.reserve(size);

  for (auto i = 0; i < size; i++) {
    vector3.push_back(double(vector1[i]) + double(vector2[i]) * 0.000000001);
  }

  return vector3;
}

