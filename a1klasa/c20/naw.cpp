#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<bool> macias;
  bool at=1,lol=0;
  int n,xd,jedd=0,jed=0,dwa=0,ddwa=0,ijed=0,idwa=0;
  char k[200022];
  scanf("%d\n",&n);
  scanf("%s",k);
  for(int i=0; i<n ; ++i)
  {
    xd=k[i];
    xd-=40;
    xd=!xd;
    if(xd) ++ijed;
    else ++idwa;
    macias.push_back(xd);
  }

  for(int i=0 ; i<n ; ++i){

    if(macias[i]) ++jed;
    else ++dwa;

    if(jed<dwa){
      jedd++;
      jed++;
    }

  }

if(jed!=dwa){ddwa+=abs(jed-dwa);}





  /*for(int i=0 ; i<n ; ++i)
  {
    if(!b[i][0]&&!b[i][1])
    {
      for(int u=0 ; u<i ; ++u)
      {
          if(b[u][0]&&!b[u][1])
          {
            b[u][1]=1;lol=1;break;
          }
      }
      if(!lol) ++jed;
      lol=0;
    }
  }

  for(int i=n-1 ; i>0 ; --i)
  {
    if(b[i][0]&&!b[i][1])
    {
      for(int u=0 ; u<i ; ++u)
      {
          if(!b[u][0]&&!b[u][1])
          {
            b[u][1]=1;lol=1;break;
          }
      }
      if(!lol) ++dwa;
      lol=0;
    }
  }
*/
printf("%d %d",jedd,ddwa);

return 0;
}
