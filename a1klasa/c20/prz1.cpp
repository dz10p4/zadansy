#include <bits/stdc++.h>
using namespace std;
int main(){
  int prev=0,n,inp1,inp2,cter=0;
  vector<pair<int,int>> para;
  scanf("%d",&n);

  for (int i=0 ; i<n ; i-=-1) {
    scanf("%d%d",&inp1,&inp2);
    para.push_back(make_pair(inp1,inp2));
  }

  sort(para.begin(), para.end());

  for(int i=1 ; i<n; ++i){
    if(para[i].first<=para[prev].second){
      para[prev].second=para[i].second;
    } else {
      cout << para[prev].first << " " << para[prev].second << "\n";
      prev = i;
    }
  }
  if (prev != n-1) {
    cout << para[prev].first << " " << para[prev].second << "\n";
  }

  //   for(int u=0 ; u<para.size() ; ++u){
  //     cout<<para[u].first<<" "<<para[u].second<<"\n";
  //   }
  //   cout<<"\n";
  //
  // }

  // for(int i=0 ; i<para.size();++i){
  //   cout<<para[i].first<<" "<<para[i].second<<endl;
  //   //printf("%d %d")
  // }

return 0;
}
