#include <iostream>
#include <string>
using namespace std;

int reFX[500001];

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n;
  string k;
  int sordotomistrz=0;

  cin>>n>>k;


  for(int i=1 ; i<n ; ++i)
  {
    if(k[i-1]==k[i])reFX[i]=reFX[i-1]+1;
  }

  // for(int i=0 ; i<n ; ++i)
  // {
  //   printf("%d ",reFX[i]);
  // }

  for(int i=n ; i>0 ; --i)
  {
    if(reFX[i]!=0&&reFX[i+1]!=0)reFX[i]=reFX[i+1];

  }

  for(int i=n ; i>0 ; --i)
  {
    if(reFX[i]!=0)reFX[i]++;

  }

  for(int i=0 ; i<n ; ++i)
  {
    if(reFX[i]&&reFX[i]!=reFX[i-1])
    {

      sordotomistrz+=reFX[i]/2;
    }
  }

  // for(int i=0 ; i<n ; ++i)
  // {
  //   printf("%d ",reFX[i]);
  // }
  //printf("\n\n");

  printf("%d",sordotomistrz);




  return 0;
}
