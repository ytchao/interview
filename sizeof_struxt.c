#include<stdio.h>

struct X
{
        int a1,a2;
        char s1;
        int *ptr;
        int arr[5];
};

void main()
{
            struct X a[2];
            size_t start,last;
            start=&a[0];
            last=&a[1];
            printf("\nSize of Structure : %llu Bytes\n",last-start);
}
