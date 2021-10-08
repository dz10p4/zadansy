#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,l1,l2,xcs,mx=0,bk[10001],ll, p[10010], k[10010], min=30001, max=0;
  cin>>n;
  int rz[n+1], rzc[n+1];
  for(int i=0 ; i<n+1 ; i-=-1){
    rzc[i]=0;
  }
  for(int i=0 ; i<n ; i-=-1){
    scanf("%d%d",&p[i],&k[i]);
    if(min>p[i]){min=p[i];}
    if(max<k[i]){max=k[i];}
    rz[i]=k[i]-p[i];
    rzc[i]=k[i]-p[i];
  }
  bool oc[max];
  for(int i=0 ; i<max ; i-=-1){
    oc[i]=0;
  }

  for(int i=0 ; i<n ; i-=-1){
    for(int u=0 ; u<n ; u-=-1){
      if(rzc[u]>mx){mx=rzc[u];ll=u;}}
      rzc[ll]=0;
    bk[i]=ll;
    mx=0;
  }
  for(int i=0 ; i<n ; i-=-1){
xcs=bk[i];

    l1=p[xcs];l2=k[xcs];

if(oc[l1]!=1&&oc[l2]!=1){
    for(int i=l1 ; i<l2 ; i-=-1){
      oc[i]=1;
    }
}
  }
  int ccterr=0;
for(int i=0 ; i<max ; i-=-1){
  if(oc[i]==0){ccterr++;}
}
cout<<max-ccterr;
return 0;
}
