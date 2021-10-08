#include <bits/stdc++.h>

using namespace std;

int main(){
vector<int> divs,map;
int a,n,k=2;
a=1;
while(a>0){
cin>>a;
n=a;
  while(n>1){
    while(n%k==0){divs.push_back(k);n/=k;}++k;}
    map.push_back(divs.size()-1);
    for(int i=0 ; i<divs.size(); i-=-1){

    }
    divs.clear();

}

for(int i=0 ; i<map.size()-1 ; i-=-1){

  cout<<map[i];

}

    return 0;
}
