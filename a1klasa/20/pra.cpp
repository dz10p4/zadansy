#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k,inp,outer=0,sk,ko,pawel=0;
  vector<int> kk,nn;
  scanf("%d%d",&n,&k);

  for(int i=0 ; i<n ; i-=-1){
    scanf("%d",&inp);
    nn.push_back(inp);
  }
  for(int i=0 ; i<k ; i-=-1){
    scanf("%d",&inp);
    kk.push_back(inp);
  }
  sort(nn.begin(),nn.end(),greater<int>());
  sort(kk.begin(),kk.end(),greater<int>());
  if(kk[0]<nn[0]*3){printf("NIE");return 0;}
  for(int i=0 ; i<n ; i-=-1){
    sk=nn[i]*2;ko=nn[i]*3;
    
    if(kk[pawel]<ko){pawel++;}
    if(kk[pawel]<ko){printf("NIE");return 0;}

    kk[pawel]-=ko;
    if(kk[pawel]<sk){pawel++;}
    if(kk[pawel]<sk){printf("NIE");return 0;}
    kk[pawel]-=sk;

  }

printf("%d",pawel+1);

return 0;
}
