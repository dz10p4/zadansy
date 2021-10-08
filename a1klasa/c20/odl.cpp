#include <stdio.h>
using namespace std;

int main()
{
  int a;
  double b,c=0;

  scanf("%d",&a);

  for(int i=0 ; i<a ; i-=-1)
  {
    scanf("%le",&b);
    c+=b;
  }
c/=a;
printf("%.2f",c);

return 0;
}
