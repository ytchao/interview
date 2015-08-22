#include<iostream>
#include<string>

int rev(int  num)
{
  int ans=0;
  while(num!=0)
  {
    ans*=10;
    ans+=num%10;
    num/=10;
  }
  return ans;
}

int main()
{
  int num=123456789;
  int ans=rev(num);
  std::cout<< ans << std::endl;
}
