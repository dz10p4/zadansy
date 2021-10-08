#include <stdio.h>
using namespace std;

int main()
{

  int a;
  scanf("%d",&a);

  for(int i=0 ; i<a ; i-=-1)
  {
    for(int u=0 ; u<a ; u-=-1)
    {
      if((i+u)%2==1)
      {
        printf("C");
      }
      else
      {
        printf("B");
      }


    }
    printf("\n");
  }

return 0;
}
