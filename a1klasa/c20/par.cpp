#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> macias;
  long long int a;
  int b,bruh=0;
  scanf("%lld",&a);
  while(a!=0){
    macias.push_back(a%5);
    a/=5;

  }
  for(int i=macias.size()-1 ; i>=0;i-=1)
  {
    printf("%d",macias[i]*2);

  }

  return 0;
}
