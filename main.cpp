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

  for (size_t i = 0; i < atoi(argv[1]); i++) {
    std::cout << rng::rng::generateRandomNumber(atoi(argv[2]), atoi(argv[3])) << std::endl;
  }
}

