#include <bits/stdc++.h>
using namespace std;
int main(){
  double a, b, c, d, p, k, x;
cin>>a>>b>>c>>d>>p>>k;
x=(p+k)/2;
  while(a*x*x*x+b*x*x+c*x+d!=0){
    if(a*x*x*x+b*x*x+c*x+d>0){
      k=x;
      x=(p+k)/2;
    }
    else if(a*x*x*x+b*x*x+c*x+d<0){
    p=x;
    x=(p+k)/2;
    }
  }

cout<<setprecision(4)<<fixed;
cout<<x;

  return 0;
}
