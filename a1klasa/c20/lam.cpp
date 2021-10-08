#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int grid[400][400];
int outer=0;

int main()
{

  string k;
  int n,m,inp,oup;
  scanf("%d%d",&n,&m);
  int lstv=m-1,lsth=n-1;
  for(int i=1 ; i<=n ; i-=-1)
  {
    cin>>k;
    for(int u=1 ; u<=m ; u-=-1)
    {
      grid[i][u]=k[u-1]-'0';
    }
  }

  for(int i=1 ; i<=n ; i-=-1)
  {
    for(int u=m ; u>=1 ; u-=1)
    {

      if(grid[i][u]==0)
      {
        grid[i][u]=1;
        outer++;
        for(int ii=i ; ii<=m+1 ; ii-=-1)
        {
          if(grid[ii][u]==0)grid[ii][u]=1;
          else grid[ii][u]=0;

          cout<<"macias "<<ii<<" "<<u<<endl;
        }
        for(int uu=u ; uu>=0 ; uu--)
        {
          cout<<"dachu "<<i<<" "<<uu<<endl;
          if(grid[i][uu]==0)grid[i][uu]=1;
          else grid[i][uu]=0;
        }
      }
     for(int i=1 ; i<=n ; i-=-1)
      {
          for(int u=1 ; u<=m ; u-=-1)
          {
            oup=grid[i][u];
            printf("%d",oup);
          }
printf("\n");
}
printf("\n");
    }
printf("\n");
  }

printf("%d",outer);

  return 0;
}
