#include <bits/stdc++.h>

using namespace std;

int main(){
  long int a,w=0;
  scanf("%ld",&a);
  while(a!=0)
  {
    w=0;
    for(int i=1;i*i<=a;++i)
    {
      if(a%i==0)
      {
        ++w;
      }
    }
    printf("%ld\n",w);
    scanf("%ld",&a);
  }

  return 0;
}
