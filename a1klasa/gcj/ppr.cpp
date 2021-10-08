#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int bucket[1440],bucket2[1440];
int main()
{
  bool elo=1;
  int t,n,inp1, inp2,prev=0;
  pair<pair<int,int>,int> ruta[1001];
  vector<int> twos;
  scanf("%d",&t);

  for(int i=0 ; i<t ; i-=-1)
  {
    printf("Case #%d: ",i+1);
    scanf("%d",&n);
    for(int u=0 ; u<n ; u-=-1)
    {
      scanf("%d%d",&ruta[u].first.first,&ruta[u].first.second);
      ruta[u].second=i;
    }



    for(int u=0 ; u<n ; u-=-1)
    {
      for(int ii=ruta[u].first.first ; ii<ruta[u].first.second ; ii-=-1 )
      {
        bucket[ii]++;
      }
    }

    for(int u=0 ; u<1440 ; u-=-1){

      if(bucket[u]>2){elo=0; break;}

    }

    for(int u=0 ; u<1440 ; u-=-1){

      if(bucket[u]==2&&bucket[u-1]!=2){++bucket2[u];}

    }



    if(!elo){ printf("IMPOSSIBLE");}
    else
    {
      for(int u=0 ; u<n ; u-=-1){

        if(bucket2[ruta[u].first.first]!=1){putchar_unlocked('C');}
        else putchar_unlocked('J');

      }

    }

printf("\n");
elo=1;
for(int u=0 ; u<1440 ; u-=-1){
  bucket[u]=0;bucket2[u]=0;
}
for(int u=0 ; u<1001 ; u-=-1){
  ruta[u].first.first=0;
  ruta[u].first.second=0;
  ruta[u].second=0;

}
  }


  return 0;
}
