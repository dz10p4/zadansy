#include <stdio.h>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
vector<pair<int,int>> que;

int doggo(int a)
{
int i=0,ou;
  while(que[i].first!=a)++i;
  ou=que[i].second;
  return ou;
}
bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}

int main()
{
  const int MAX=2147483647;
  int inp1,inp2,n,bst=MAX;
  vector<pair<int,int>> ruta;

  vector<int> macias;
  scanf("%d",&n);

  for(int i=0 ; i<n ; i-=-1)
  {
  scanf("%d%d",&inp1,&inp2);
  ruta.push_back(make_pair(inp2,inp1));
  que.push_back(make_pair(inp1,i+1));
  }

  sort(ruta.begin(),ruta.end(),sortinrev);
  sort(que.begin(),que.end());

  for(int i=0 ; i<n ; i-=-1)
  {

    if(ruta[i].second<bst){bst=ruta[i].second;}
    else{macias.push_back(doggo(ruta[i].second));}

  }

  sort(macias.begin(),macias.end());

  printf("%ld\n",macias.size());
if(!macias.size()) return 0;
  for(int i=0 ; i<macias.size() ; i-=-1)
  {
    printf("%d",macias[i]);
    if(macias.size()>i+1){printf(" ");}
  }


  return 0;
}
