#include <stdio.h>
using namespace std;
int grid[500][500];
int main()
{


  int n,m,r,in,im;
  char ccc;
  scanf("%d%d%d",&n,&m,&r);

  for(int i=0 ; i<r ; i-=-1)
  {
    scanf("%d%d",&in,&im);
    grid[in-1][im-1]=1;
  }

  for(int i=0 ; i<n ; i-=-1)
  {
    for(int u=0 ; u<m ; u-=-1)
    {
      if(grid[i][u]==0)putchar_unlocked(46);
      else putchar_unlocked(88);
    }
    printf("\n");
  }


  return 0;
}
