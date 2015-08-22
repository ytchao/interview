#include<iostream>
#include<string>


void uni(std::string& s)
{
  std::string::iterator it=s.begin();
  while(it!=s.end()-1)
  {
    if(*(it+1)==*it)
    {
      s.erase(it+1);
    }
    else
     it++;
  
  }
}


int main()
{
  std::string s("111112233455667899999");
  uni(s);
  std::cout <<s <<std::endl;
}
