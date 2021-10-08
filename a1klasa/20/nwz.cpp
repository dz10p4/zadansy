#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
  vector<double> bb;
  int cter=0,prev=0,pmax=0;
  double a=1;

  for(int i=0 ; a!=0 ;i-=-1)
  {
    cin>>a;
    bb.push_back(a);
  }

  for(int i=0 ; i<bb.size();i-=-1){

    if(bb[i]<=bb[i+1])
    {
      ++cter;
    }
    else{if(pmax<cter){pmax=cter;}cter=0;}
  }
  printf("%d",pmax+1);
return 0;
}
