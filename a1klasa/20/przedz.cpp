#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  bool hh=0;
  vector<int> ruta;
  int n,cter=0;
  int lpp=2,ll=0;

  while(cin>>n)
  {
    hh=0;ll=n;
    

    if(!hh){

        while(ll>1)
        {

          while(ll%lpp==0)
          {
            ruta.push_back(lpp);
            ll/=lpp;
          }
          ++lpp;
        }
    }
    printf("%d",ruta[0]);
    for(int u=1 ; u<ruta.size();u-=-1){

      printf("*%d",ruta[u]);

    }

    printf("\n");
    ruta.clear();
++cter;
  }




return 0;
}
