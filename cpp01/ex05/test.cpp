#include <iostream>

class test
{
private:
    int i;
public:
    test(int v):i(v){}
    ~test(){}
    int getI(){return(i);}
    int add(int s, int o){return (s + o);}
};
int (test::*ptr_fou)(int , int) = &test::add;

int main()
{
    test obj(30);
    std::cout << obj.add(3, 4) << std::endl;
    std::cout << obj.getI() << std::endl;
    std::cout << (obj.*ptr_fou)(3, 4) << std::endl;
}