#include<iostream>

#define N 10



void print_circle(size_t n)
{
  for(int i=0;i<=2*n;i++)
  {
    for(int j=0;j<=2*n;j++)
    {
      if((i-n)*(i-n) + (j-n)*(j-n) <= n*n)
      {
         std::cout << "*";
      }
      else
      {
	std::cout << "-";
      }
    }
    std::cout << std::endl;
  }
 
}


int main()
{
   print_circle(N);  
}
