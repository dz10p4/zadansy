#include <stdio.h>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  string k;
  int lgth,sumowanko=0,cter=1;
  cin>>k;
  lgth=k.length();
  //cout<<k[lgth-1]<<endl;
  sumowanko+=k[lgth-1]-48;
  //cout<<sumowanko<<endl;
  for(int i=k.length()-2 ; i>=0 ; --i){
    sumowanko+=(k[i]-48)*pow(4,cter);
    cter++;
  }
  printf("%d",sumowanko);
return 0;
}
