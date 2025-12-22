#include <iostream>
class B {
public:
    int* p;

    B(int x) { p = new int(x); }
    ~B() {  }
};

int main() {
    B b1(5);
    std::cout << *b1.p << "\n";
    B b2 = b1;  // copy constructor
    *b1.p = 3;
    std::cout << *b2.p << "\n";
}
