#include <stdio.h>
using namespace std;

int main()
{

  int h;
  scanf("%d",&h);

  for(int i=0 ; i<h/2 ; i-=-1)
  {

    printf("H");
    for(int u=0 ; u<h-2 ; u-=-1)
    {
      printf(" ");
    }
    printf("H\n");
  }

  for(int i=0 ; i<h ; i-=-1){printf("H");}
  printf("\n");
  for(int i=0 ; i<h/2 ; i-=-1)
  {

    printf("H");
    for(int u=0 ; u<h-2 ; u-=-1)
    {
      printf(" ");
    }
    printf("H\n");
  }



}
