#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  int a, b, mmr=0;
  vector <string> t;
  cin>>a>>b;

  for(int i=0 ; i<a ; i-=-1){

    cin>>s;
    t.push_back(s);
    for(int u=0 ; u<s.length() ; u-=-1){
      if(s[u]=='.'){mmr++;}
    }
  }


}
