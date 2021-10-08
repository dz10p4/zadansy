#include <bits/stdc++.h>

using namespace std;

int main(){
  bool gg=1;
  unsigned long long n;
  int k,q,jk,jr,x,y,d,franas,cteru=0,ctera=0,nnb=0,cterb=0;
  vector<int> vi,vu;
  scanf("%lld%d%d",&n,&k,&q);
    for(int i=0 ; i<q ; i-=-1){
      scanf("%d%d",&x,&y);
d=x;
      while(d>1){
        vi.push_back(d);
        d=(d+k-2)/k;
        ctera++;
      }
d=y;
      while(d>1){
        vu.push_back(d);
        d=(d+k-2)/k;
        cterb++;
      }
      sort(vi.begin(),vi.end());
      sort(vu.begin(),vu.end());
if(vi.size()!=0&&vu.size()!=0){
      while(gg){
        if(vi[nnb]!=vu[nnb]){gg=0;}
        nnb++;
        cteru++;
}}
else{cteru=0;}
franas=ctera+cterb-cteru;
    cout<<ctera<<" "<<cterb<<" "<<cteru<<endl;
      printf("%d\n", franas);
vi.clear();vu.clear();ctera=0;cterb=0;cteru=0,nnb=0;
    }
return 0;
}
