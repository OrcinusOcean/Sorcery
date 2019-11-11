#include <iostream>
#include <string>

struct C {
    std::string a;
    
      C() {
          std::cout << "defalt ctor" << std::endl;
      }
     C(const C&) { std::cout << "copy ctor.\n"; }
     C(const C&&) { std::cout << "move ctor.\n";}
};

C f() {
      int a = 2;
      int b = 3;
      return C();
}

int main() {
    std::cout << "Hello World!\n";
    C obj = f();
    return 0;
}
