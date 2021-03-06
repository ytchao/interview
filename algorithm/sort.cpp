#include<iostream>


void selection_sort(int* a,size_t n)
{
  for(int i=0;i<n-1;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          if(a[i]>a[j])
              std::swap(a[i],a[j]);
      }
  }

}

void bubble_sort(int*a,size_t n)
{
   for(int i=n-1;i>0;i--)
   {
    for(int j=0;j<i;j++)
    {
     if(a[j]>a[j+1])
       std::swap(a[j],a[j+1]);
    }  
   }
}

void dump(int a[],size_t n)
{
    for(int i=0;i<n;i++)
        std::cout << a[i]<< " ";
   std::cout << std::endl;
}
int main()
{
   int a[5]={3,5,1,2,4};
   bubble_sort(a,5);
   dump(a,5);
}
