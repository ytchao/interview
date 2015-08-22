#include<stdlib.h>
#include<stdio.h>

#define row 5
#define col 6

void init(int** twoD)
{
  for(size_t i=0;i<row;i++)
  for(size_t j=0;j<col;j++)
     twoD[i][j]=1;
}

void dump(int** twoD)
{
 for(int i=0;i<row;i++) 
 {
  for(int j=0;j<col;j++)
   printf("%d ",twoD[i][j]);
  printf("\n");
 }
}


int main()
{

  int **twoD=malloc(sizeof(int*)*row);
  for(size_t i=0;i<row;i++)
     twoD[i]=malloc(sizeof(int)*col); 
  init(twoD);
  dump(twoD);
  
  free (twoD);    
}
