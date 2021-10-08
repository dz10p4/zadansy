#include <bits/stdc++.h>

using namespace std;

int main(){

  vector <int> t;
  int a=1, d=0, g=0;

  while(a!=0){

    cin>>a;

    t.push_back(a);

  }
  for (int i=0 ; i<t.size()-3 ; i++ ){

      if(t[i]>t[i+1] && t[i+1]<t[i+2]){d++;}
      if(t[i]<t[i+1] && t[i+1]>t[i+2]){g++;}

  }
  if(t[1]<t[0] && t[t.size()-1]<t[0]){g++;}
  if(t[1]>t[0] && t[t.size()-1]>t[0]){d++;}
  if(t[0]<t[t.size()-1] && t[t.size()-2]<t[t.size()-1]){g++;}
  if(t[0]>t[t.size()-1] && t[t.size()-2]>t[t.size()-1]){d++;}

    cout<<g<<" "<<d;

return 0;
}
