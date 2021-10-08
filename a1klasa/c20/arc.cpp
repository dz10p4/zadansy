#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string k;

  int n=1,nn,mx=0;

  cin>>nn>>k;

  for(int i=0 ; i<nn-1 ; i-=-1)
  {

    if(k[i]==k[i+1]) {mx=max(mx,n);n=1;}
    else n++;
    //cout<<k[i]<<" "<<k[i+1]<<" "<<n<<" "<<mx<<endl;
  }
  mx=max(mx,n);
  cout<<mx;


  return 0;
}
