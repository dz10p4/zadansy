#include <bits/stdc++.h>

using namespace std;

int main(){

  int d,s,a,inp,yy[4],szs,dls;

  vector <int> sz, dl, bruh;

  cin>>d>>s>>a;

  for(int i=0 ; i<a ; i-=-1){

    cin>>inp;

    dl.push_back(inp);

    cin>>inp;

    sz.push_back(inp);

  }
szs=sz.size()-1;
dls=dl.size()-1;

sort(dl.begin(), dl.end(), greater<int>());
sort(sz.begin(), sz.end(), greater<int>());

yy[0]=sz[szs];
yy[1]=dl[dls];
yy[2]=s-sz[0];
yy[3]=d-dl[0];
/*
for(int i=0 ; i<4 ; i-=-1){
  cout<<yy[i]<<endl;

}
*/
sort(yy, yy+4);

cout<<yy[3]*yy[3];

return 0;
}
