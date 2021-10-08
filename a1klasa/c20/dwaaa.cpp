#include <string>
#include <vector>
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  vector<int> macias;
  int a,b,nn=0,bruh=0,dd=0;
  string k;
  cin>>a>>b>>k;

  for(int i=k.length()-1 ; i>=0 ;i-=1)
  {
    dd+=(k[i]-'0')*pow(a,nn);
    ++nn;
  }

  while(dd!=0){
    macias.push_back(dd%b);
    dd/=b;

  }


   for(int i=macias.size()-1 ; i>=0 ; --i)
   {
     cout<<macias[i];
   }

  return 0;
}
