#include <bits/stdc++.h>

using namespace std;

int main() {

      std::vector<int> vvvv;
      int k,n, mx=0, z, zz=1, zzz;
      cin>>k>>n;
      int v[k+10],e[k+10];
      for(int i=0 ; i<k ; i-=-1){
        cin>>v[i]>>e[i];
        if(e[i]>mx){mx=e[i];}
      }
      zzz=mx*n+n;
      int t[1000000]={};
      for(int i=0 ; i<k ; i-=-1){

        for(int u=0 ; u<n ; u-=-1){
          z+=v[i]+zz;
          cout<<z<<"  ";
          if(u%e[i]==0){z--;} //cout<<i<<":"<<u<<" "<<e[i]<<"lol";}
          t[z]++;
          vvvv.push_back(z);

        }
        z=0;
        zz=1;
      }

//cout<<vvvv[0]<<" "<<vvvv[1]<<" "<<vvvv[2];
  for(int i=0 ; i<k*n ; i-=-1){
    cout<<vvvv[i]<<" ";
  }
return 0;
}

/*
4 3
26 2
39 3
45 1
56 2
*/
