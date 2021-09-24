#include <bits/stdc++.h>
using namespace std;

int poz[1002][1002],pio[1002][1002],grid[1001][1001];

int main()
{
 int mx=__INT_MAX__;
 int n,m;
 char c;
 scanf("%d%d",&n,&m);
 getchar_unlocked();

 for(int i=0 ; i<n ; ++i)
 {
   for(int u=0 ; u<m ; ++u)
   {
     c=getchar_unlocked();
     if(c=='#')grid[i][u]=1;
     else grid[i][u]=0;
   }
   getchar_unlocked();
 }

 for(int i=1 ; i<=n ; ++i)
 {
   for(int u=1 ; u<=m ; ++u)
   {
     if(grid[i-1][u-1])poz[i][u]=poz[i][u-1]+1;
   }


 }
 for(int i=1 ; i<=n ; ++i)
 {
   for(int u=1 ; u<=m ; ++u)
   {
     if(grid[u-1][i-1])pio[u][i]=pio[u][i-1]+1;
   }
 }

 for(int i=n ; i>0 ; --i)
 {
   for(int u=m ; u>0 ; --u)
   {
     if(!poz[i][u])continue;
     if(!poz[i][u+1])continue;
     else poz[i][u]=poz[i][u+1];
   }
 }

 for(int i=n ; i>0 ; --i)
 {
   for(int u=m ; u>0 ; --u)
   {
     if(!pio[u][i])continue;
     if(!pio[u][i+1])continue;
     else pio[u][i]=poz[u][i+1];
   }
 }

//  for(int i=1 ; i<=n ; ++i)
//  {
//    for(int u=1 ; u<=m ; ++u)
//    {
//      printf("%d",poz[i][u]);
//    }
//    printf("\n");
//  }
// printf("\n");
//  for(int i=1 ; i<=n ; ++i)
//  {
//    for(int u=1 ; u<=m ; ++u)
//    {
//      printf("%d",pio[u][i]);
//    }
//    printf("\n");
//  }

int mil=mx,an=mx,minal;

for(int i=0 ; i<=n ; ++i)
{
  for(int u=0 ; u<=m ; ++u)
  {
    if(poz[i][u]!=0&&mil>poz[i][u])mil=poz[i][u];
    if(pio[i][u]!=0&&an>pio[i][u])an=pio[i][u];
  }
}

minal=min(mil,an);

printf("%d",minal);


  return 0;
}
