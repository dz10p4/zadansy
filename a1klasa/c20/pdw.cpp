#include <vector>
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(){

  int inpx,inpy,n,sumowanko=0;
  vector<pair<int,int>>ruta;
  float pole,bang;

  scanf("%d",&n);

  for(int i=0 ; i<n ; ++i)
  {
    scanf("%d%d",&inpx,&inpy);
    ruta.push_back(make_pair(inpx,inpy));
  }

  sumowanko+=(ruta[1].second-ruta[ruta.size()-1].second)*ruta[0].first;
  sumowanko+=(ruta[0].second-ruta[ruta.size()-2].second)*ruta[ruta.size()-1].first;

  for(int i=1 ; i<n-1 ; i-=-1)
  {
    sumowanko+=(ruta[i+1].second-ruta[i-1].second)*ruta[i].first;
  }

  sumowanko=abs(sumowanko);
  bang=sumowanko;
  pole=bang/2;

  printf("%.2f",pole);

return 0;
}
