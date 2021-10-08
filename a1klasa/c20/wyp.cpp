#include <bits/stdc++.h>
using namespace std;

int main(){
  bool wej=0;
  int inp,n,count=2,mxx=0;
  vector<int> macias;

  scanf("%d",&n);

  for(int i=0 ; i<n ; ++i)
  {
    scanf("%d",&inp);
    macias.push_back(inp);
  }

  for(int i=0 ; i<macias.size()-1 ; ++i)
  {
    if(macias[i]>=macias[i+1]&&macias[i+1]<=macias[i+2])
    {
        mxx=max(mxx,count);
        count=2;
        wej=1;
    }
    else{++count;}

  }

  mxx=max(count,mxx);

  if(!wej) mxx-=1;

  printf("%d",mxx);

return 0;
}
