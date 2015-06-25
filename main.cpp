#include <iostream>

#include "rng.h"

int main(int argc, char* argv[])
{
  if (argc != 4) {
    std::cout << "\nInvalid number of arguments.\n";
    std::cout << "Please enter arguments for:\n1. Size of the list to be " <<
                 "generated.\n2. Smallest number to be generated.\n3." <<
                 " Largest number to be generated.\nRespectively.";
    return 1;
  }

  std::vector<int> list = rng::rng::generateRandomIntVector(
                            atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));

  for (size_t i = 0; i < list.size(); i++) {
    std::cout << list[i] << std::endl;
  }

}

