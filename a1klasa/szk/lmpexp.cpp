#include <bits/stdc++.h>

using namespace std;

bool tab[400][400];

bool invert(bool a){

    if (a==0){a=1;}
    else{a=0;}

  return a;
}
int main(){

      string inp;

      int n, m, en, uu, cter=0, aa=0, as=0, ad=0;
      cin>>n>>m;
      en=m-1;
      uu=n-1;
      for (int i=0 ; i<n ; ++i){

        cin>>inp;

        for(int u=0 ; u<m ; ++u){
          inp[u]-=48;
          tab[i][u]=inp[u];

        }
      }

      for(int u=0 ; u<m ; ++u){
        for(int i=0 ; i<n ; ++i){

          if(tab[i][en-u]==0){
            tab[i][en-u]=1;
            ++cter;

            for(int o=en-u ; o>0 ; --o){
              tab[i][o]=invert(tab[i][o]);
            }
            for(int o=)

            }
          }
        }

cout<<endl<<endl;

for(int o=0; o<n ; ++o){

  for(int p=0 ; p<m ; ++p){

    cout<<tab[o][p];


  }

cout<<endl;




}



cout<<endl<<endl;





      }




cout<<cter;
return 0;
}
