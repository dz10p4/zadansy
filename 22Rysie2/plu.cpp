#include <bits/stdc++.h>
using namespace std;


int grid[2002][2002],l[2002][2002],p[2002][2002];
int cter;
int main()
{

int n;
string wczyt;
scanf("%d",&n);
getchar_unlocked();getchar_unlocked();
for(int i=1 ; i<=n ; ++i)
{

    scanf("%s",wczyt);

    for(int j=0;j<n;++j)
    {

      grid[i][j]=wczyt[j]-'0';

    //grid[i][u]=c-'0';
    }

    //scanf("%c");
}


// for(int i=1 ; i<=n ; ++i)
// {
//   for(int u=1 ; u<=n ; ++u)
//   {
//
//     l[i][u]=l[i][u-1]+grid[i][u];
//     p[i][u]=p[i][u-1]+grid[u][i];
//
//
//   }
// }

// for(int i=0 ; i<=n ; ++i)
// {
//   for(int u=0 ; u<=n ; ++u)
//   {
//
//   printf("%d ", l[i][u]);
//
//
//   }
//   printf("\n");
// }
// printf("\n");
//
// for(int i=0 ; i<=n ; ++i)
// {
//   for(int u=0 ; u<=n ; ++u)
//   {
//
//   printf("%d ", p[i][u]);
//
//
//   }
//   printf("\n");
// }
// printf("\n");
// for(int i=0 ; i<=n ; ++i)
// {
//   for(int u=0 ; u<=n ; ++u)
//   {
//
//   printf("%d ", grid[i][u]);
//
//
//   }
//   printf("\n");
// }



  return 0;
}
