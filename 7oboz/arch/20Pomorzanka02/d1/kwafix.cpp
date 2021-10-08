#include <bits/stdc++.h>
using namespace std;
int N[500100];
int main(){
  int a=0,n=0,k=2,ou=1,mmm;
  vector<int> divs;
  scanf("%d", &n);
  long long result=n;mmm=n;
  while(n>1){
    while(n%k==0){divs.push_back(k);n/=k;}++k;}
    for(int i=0 ; i<divs.size();i-=-1){++N[divs[i]];}
    for(int i=0 ; i<500000 ; i-=-1){if(N[i]>0){if(N[i]%2==1){result*=i;}}}
    printf("%lld", result);
    return 0;}
