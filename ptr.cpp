#include<iostream>

aaaaaa
int main()
{
    int *ptr;
    int a[2][2]={1,2,3};
    int b[2][2]={{1},{2,3}};

    ptr=(int*)a;
    std::cout << *ptr << "  " << *(ptr+1);
}
