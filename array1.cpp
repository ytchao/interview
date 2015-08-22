#include<iostream>
/*
int main()
{
   char str[]="hello";
   char *p=str;
   int n=10;
   std::cout<<sizeof(str)<<std::endl;
   std::cout<<sizeof(p)<<std::endl;
   std::cout<<sizeof(n)<<std::endl;
}
*/
/*
Use  sizeof(arrayz_name) can get the size(byte) of the array
But when an array_name be sent as a parameter,it is seen just as a pointer,and it's size is 4/8(OS 32/64).
*/
int main()
{
  int a[]={6,7,8,9,10};
  int*p=a;
  *(p++)+=123;
  *(++p)+=123;

  for(auto x:a)
  std::cout << x <<std::endl;
}
