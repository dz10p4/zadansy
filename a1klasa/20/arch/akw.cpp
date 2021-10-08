#include <bits/stdc++.h>

using namespace std;

int main(){

   long double a,b,c;

  cin>>a>>b;

  c=b/a;

  if(c<0.333333333){cout<<"TAK";}
else{cout<<"NIE"; return 0;}

c=(b*3-a)/3;
cout<<c;


return 0;
}
