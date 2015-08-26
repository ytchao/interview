#include<stdlib.h>
#include<stdio.h>


int strcmp(const char*source,const char*dest)
{
    while(*source && *dest)
    {
        if(*source==*dest)
        {
            source++;
            dest++;
        }
        else
        {
            return -1;
        }
    }
    if(*source==0 && *dest==0)
       return 0;
    else
       return -1;
}


int main()
{
  char  s[]="hello";
  char  d[]="hello";

  int a=strcmp(s,d);
  printf("%d\n",a);
}
