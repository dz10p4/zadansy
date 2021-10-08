#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int a,cter=0;
  string k,l;
  cin>>a>>k>>l;
  for(int i=0 ; i<a ; i-=-1)
  {
    if(k[i]==l[i]){++cter;}

  }

  cout<<cter;

  return 0;
}
