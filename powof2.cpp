#include<iostream>

int main()
{
   int val;
   std::cin >> val;
   std::cout << std::boolalpha << !(val & (val-1)) << std::endl;
}
