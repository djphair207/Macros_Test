#include <iostream>

//This is a super useful DEBUG tool
#define assert(x)\
if (!(x)) {\
  std::cout << "Assertion " << #x << " failed" << std::endl;\
  exit(1);\
}

#define ECHO(x) #x << ": " << x

int main() {
  int num = 0;
  int a = 1;
  int b = 2;
  int sum = 3;
  std::cout << "Hello World!\n";
  
  assert(num == 0);

  std::cout << ECHO(a) << ECHO(b) << ECHO(a + b) << '\n';
  std::cout << ECHO(sum) << ECHO(sum << 2) << '\n';
  
  return 0;
}
