#include<iostream>

void func1()
{
    std::cout << "1" << std::endl;
}
void func2()
{
    std::cout << "2" << std::endl;
}
void func3()
{
    std::cout << "3" << std::endl;
}

int main()
{
   int n=2;
   void (*ptr[3])()={func1,func2,func3};
   ptr[n-1]();
}
