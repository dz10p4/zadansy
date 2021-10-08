#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
  int a,nn;
  bool c=0;
  unsigned long long int k,d;
  cin>>a;
  nn=a;
  d=a;
  while(c!=1){
  b=sqrt(d);
  k=sqrt(d);
    if(b-k==0){break;}
    d+=nn;
  }
  cout<<d;
  return 0;
}
