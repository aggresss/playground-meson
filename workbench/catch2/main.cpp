// Supplying main():
#define CATCH_CONFIG_RUNNER

// Let Catch provide main():
// #define CATCH_CONFIG_MAIN

#include <catch2/catch_session.hpp>

int Factorial(int number) {
  // return number <= 1 ? number : Factorial( number - 1 ) * number;  // fail
  return number <= 1 ? 1 : Factorial(number - 1) * number;  // pass
}

int main(int argc, char* argv[]) {
  int result = Catch::Session().run(argc, argv);
  return result;
}
