#include <bits/stdc++.h>

using namespace std;

bool compar(pair <int,int> a,pair <int,int> b){

  if(a.first*pow(2,10-a.second)>b.first*pow(2,10-b.second) return 1;
  else if(a.first*pow(2,10-a.second)=b.first*pow(2,10-b.second){
    if(a.second>b.second) return 1;
    else return 0;
  }
  else return 0;
}


int main(){

  int m, x, y;

  cin>>m;
  pair<int,int> t[m];
for(int i=0;i<m;i++){
  cin>>x>>y;
  t[i].first=x;
  t[i].second=y;
}
sort (t,t+m,compar);
for(int i=0;i<m;i++)
{
  cout<<t[i].first<<" "<<t[i].second<<endl;
}





}
