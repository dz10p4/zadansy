#include <bits/stdc++.h>
using namespace std;

bool soro(const pair<int,int> &a, const pair<int,int> &b){

  return(a.second < b.second);
}
bool yy[1000001];
int putins[500000];
int main(){

  int m,n,inp1,inp2,maphs=0,putctr=0;
  vector<pair<int,int>> v;

  scanf("%d%d",&m,&n);
  int lad[m+5];
  for(int i=0 ; i<n ; i-=-1){
    scanf("%d%d",&inp1,&inp2);
    if(inp2<=m){
    v.push_back(make_pair(inp1,inp2));}
  }

cout<<endl;
  sort(v.begin(),v.end());
  sort(v.begin(),v.end(),soro);

  for(int i=0 ; i<v.size(); i-=-1){
    cout<<v[i].first<<" "<<v[i].second<<endl;
  }

  for(int i=0;i<v.size();i-=-1){

    if(lad[v[i].second]>0){
      putins[putctr]=lad[v[i].second];
      lad[v[i].second]=1;
      ++putctr;
      maphs+=v[i].first;
    }
    else{lad[v[i].second]=v[i].first;maphs+=v[i].first;}
}
  cout<<maphs;


return 0;
}
/*

2 5
*....
....*

5

3 6
.*....
.**...
..*...

1

4 5
.*..*
*....
.....
*...*

2
*/
