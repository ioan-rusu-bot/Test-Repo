#include <iostream>
#include <cstdlib>

int main(int argc, char ** argv)
{
  if (argc < 2) {
    std::cerr << "There weren't any names provided!";
    std::exit(EXIT_FAILURE);
  }
  std::cout << "Hello " << argv[1];
  return 0;
}
