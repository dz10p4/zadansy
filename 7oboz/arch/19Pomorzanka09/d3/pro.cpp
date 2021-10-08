#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, u, p, xmin, xmax, ymin, ymax, q, w;
  vector <int> x;
  vector <int> y;
cin>>a;
  for ( int i=0 ; i<a ; i++){
    cin>>u>>p;
    x.push_back(u);
    y.push_back(p);
}
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());

  xmin=x[0];
  xmax=x[x.size()-1];
  ymin=y[0];
  ymax=y[y.size()-1];


  q=xmax-xmin;
  w=ymax-ymin;

  if(w==0){w=1;}
  if(q==0){q=1;}


  cout<<q*w;
return 0;
}
