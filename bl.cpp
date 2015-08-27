#include<iostream>
#include<fstream>


int main()
{

  std::ofstream f("test.txt");
  int32_t i=0x12345678;
  int8_t *ptr=(int8_t*)&i;
  if(*ptr==0x12)
   std::cout << "Bigg" <<std::endl;
  else if(*ptr==0x78)
   std::cout<<"little" <<std::endl;
  else
   std::cout << "Errorrr"<<std::endl;
  /*f.write(reinterpret_cast<char*>(&i),sizeof(i));
  f.close();
  std::ifstream ff("test.txt");
  int8_t ans;
  ff.read(reinterpret_cast<char*>(&ans),sizeof(ans));
  if(ans==0x12)
    std::cout<<"Big"<<std::endl;
  else if(ans==0x78)
   std::cout<<"Little"<<std::endl;
  else
   std::cout << "Error" <<std::endl;
  */
}

