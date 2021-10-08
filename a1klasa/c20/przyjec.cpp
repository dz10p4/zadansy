#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> t;
  int inp,n,m=1;
  bool ee=0;
  scanf("%d",&n);
  for(int i=0 ; i<n ; i-=-1)
  {
    scanf("%d",&inp);
    t.push_back(inp);
  }

  sort(t.begin(),t.end(),greater<int>());

  for(int i=t[0] ; i>1 ; i--)
  {
    for(int u=0 ; u<n ; u-=-1)
    {
      if(t[u]%i!=0){ee=1;}
      else{ee=0;}
    }
    if(ee)
    {
      cout<<i;
      return 0;
    }
  }
cout<<t[0]+1;
return 0;
}
