#include <bits/stdc++.h>

using namespace std;

int NWD(int a, int b){
  int c;

    while (c!=0){
      c=a%b;
      a=b;
      b=c;

    }
  return a;
}

int NWW(int a, int b){
int c;

c=a*b/(NWD(a, b));

return c;

}

int main(){
  double l;
int a, b, c, d, e, f, h, g, m;
cin>>a>>b>>c>>d;

  e=NWW(a, b);
  f=NWW(b, c);
  h=NWW(c, d);

if(e==f&&f==h){
  l=h/60;
  g=floor(l);
  m=h%60;
  cout<<g<<" "<<m<<" "<<f;
}
return 0;
}
