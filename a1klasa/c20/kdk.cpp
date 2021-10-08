#include <bits/stdc++.h>
using namespace std;

int main()
{
  string k;
  int n,tricheck=0,j=0,d=0,t=0,liczba;
  cin>>k;

  n=k.length()/8;

  for(int i=0 ; i<n ; i-=-1){

    liczba=k[i*8+6]-'0';
    for(int u=i*8+3 ; u<=i*8+6 ; u-=-1){tricheck+=k[u]-'0';}
    if(liczba%2==0) ++j;
    if(liczba==5||liczba==0) ++t;
    if(tricheck%3==0) ++d;
tricheck=0;
  }
printf("%d %d %d",j,d,t);
  return 0;
}
