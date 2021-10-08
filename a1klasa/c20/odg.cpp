#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n,a;
  string k;
  cin>>n;

  for(int i=0 ; i<n ; i-=-1)
  {
    cin>>k;
    if(k[k.length()-1]%2)cout<<"L\n";
    else cout<<"P\n";
  }
  return 0;
}
