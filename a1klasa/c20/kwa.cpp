#include <stdio.h>
using namespace std;

int main()
{
  int n,a,d;

  scanf("%d",&n);
  d=n+(n*((n-3)))/2;
  //a=d*12*(n-1);
  a=(d*12*n);
  printf("%d",a);

return 0;
}
