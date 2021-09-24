#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int zgod[1000001];

int main()
{

  vector<string>tab;
  string k;
  int n;

  cin>>n;

  for(int i=0 ; i<n ; ++i)
  {
    cin>>k;
    tab.push_back(k);
  }

  sort(tab.begin(),tab.end());

  // for(int i=0 ; i<tab.size() ; ++i  )
  // {
  //   cout<<tab[i]<<endl;
  //
  // }

  int sp=0,wyn=0;

  for(int i=1 ; i<n ; ++i)
  {

    if(tab[sp][0]!=tab[i][0]){sp=i;continue;}

    for(int u=0 ; u<tab[i].size() ; ++u)
    {


    }





  }







  return 0;
}
