#include <stdio.h>
using namespace std;

int main()
{
  int a;
  scanf("%d",&a);
  for(int i=a ; i>0 ; --i)
  {
    for(int u=i ; u>0 ; --u){
      printf("T");
    }
    printf("\n");
  }
return 0;
}
