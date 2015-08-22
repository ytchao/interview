#include<iostream>


int main()
{
    int64_t val=0x123456789;
    int64_t ans=0;
    int8_t mask=0x0f;
    while(val!=0)
    {
      ans=ans <<4;
      ans+=(val&mask);
      val=val>>4;
    } 
    std::cout << std::hex << ans << std::endl;
}

