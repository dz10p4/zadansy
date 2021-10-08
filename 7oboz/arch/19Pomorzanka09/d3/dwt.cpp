#include <bits/stdc++.h>

using namespace std;

int main(){
  bool aa=0, ab=0, ac=0, ad=0, af=0;
  int a, b, c, d, i, m;
  double g;
i=1;
  cin>>a>>b>>c>>d;

  while(af==0){

    if( i%a==0 ){
      aa=1;
    }
    if( i%b==0 ){
      ab=1;
    }
    if( i%c==0 ){
      ac=1;
    }
    if( i%d==0 ){
      ad=1;
    }

    if( aa==1 && ab==1 && ac==1 && ad==1){
      af=1;
    }
    else{
      aa=0;
      ab=0;
      ac=0;
      ad=0;
}
i++;

}
i=i-1;
g=i/60;
m=i%60;
floor(g);

cout<<g<<" "<<m;


  return 0;
}
