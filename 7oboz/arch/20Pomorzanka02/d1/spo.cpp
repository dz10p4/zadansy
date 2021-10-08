#include <bits/stdc++.h>

using namespace std;

int main(){

  int x=0,a,b,p=0,c[10001]={},cter=0;
  double T[10001]={};
a=1;
  for(int i=0 ; a!=0 ; i-=-1 ){
    scanf("%d.%d", &a, &b);
    T[i]=a+b/1000;++cter;}
c[0]=1;
p=T[1];
    for(int i=0 ; i<cter ; i-=-1){
        if(p>T[i+1]){++x; p=T[i+1];}
        else{p=T[i];}
    }
    cout<<x*100;
    return 0;
}
