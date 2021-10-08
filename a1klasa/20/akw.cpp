#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

  long long a,b,c,d;
  long double e;
  scanf("%lld%lld",&a,&b);

  c=b*3;

  if(c<=a)printf("NIE");
  else
  {

    printf("TAK ");

    d=c-a;
    e=d;
    e/=3;
    a=ceil(e);
    printf("%lld",a);

  }

  return 0;
}
