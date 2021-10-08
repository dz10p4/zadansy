#include <bits/stdc++.h>
using namespace std;
int main(){
  int sumer,n,r,p1,p2,query[251][251]={};
  scanf("%d%d",&n,&r);
  for(int i=0 ; i<n ; i-=-1){
    for(int u=0 ; u<n ; u-=-1){
      cin>>query[i][u];}cout<<"denc";
}

cout<<"rożek";
sumer=2*r+1;
cout<<"buzak";
for(int i=0 ; i<n ; i-=-1){
  cout<<"sordo";
  for(int u=0 ; u<n ; i-=-1){
p1=i-r;p2=u-r;
cout<<"dachu";
  for(int ii=0 ; ii<sumer ; ii-=-1){
    for(int uu=0 ; uu<sumer ; u-=-1){
      if(p1>-1&&p2>-1&&p1<n-1&&p2<n-1){
        query[i][u]+=query[ii][uu];cout<<"macias";
}
p2++;
    }
    p1++;cout<<"ruta";
  }
  }
}

  for(int i=0 ; i<n ; i-=-1){
    for(int u=0 ; u<n ; u-=-1){
      cout<<query[i][u]<<" ";
    }
    printf("\n");
  }

return 0;
}
