#include <iostream>

using namespace std;

int main {
  int a = 3;
  int b = 5;
  int c = 2;

  switch(c){
    case a:
      cout << "c = a\n";
      break;
    case b:
      cout << "c = b\n";
      break;
    default:
      cout << "Doesn't equal either\n";
  }
  
  return 0;
}