#include<iostream>
#include<string>
#include<iomanip>
double atof(const char*s)
{
    double ans1=0.0;
    double ans2=0.0;
    while(*s != '\0')
    {
        if(*s=='.')
        {
           s++;
           double base=10.0;
           while(*s !='\0')
           {
              ans2+=(*s-'0')/base;
              base*=10;
              s++;
           }
           return ans1+ans2;
        }
        else {
           ans1*=10;
           if((*s)<'0' || (*s)>'9')
           {
               std::cout<<"Error!";
                exit(-1);
           }
           ans1+=(*s)-'0';
           s++;
        }
    }
    return ans1+ans2;
}


int atoi(const char*s)
{
    int ans=0;
    while(*s!='\0')
    {
      ans*=10;
      if((*s)<'0' || (*s)>'9')
      {
        std::cout << "Error! Can't convert text to integer!" << std::endl;
        exit(-1);
      }
      ans+= (*s)-'0';
      s++;
    }
    return ans;
}


int main()
{
   char s[]="1357.2468";
   double ans=atof(s);
   std::cout <<std::setprecision(10)<< ans;
}
