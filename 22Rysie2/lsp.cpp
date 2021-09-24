#include <bits/stdc++.h>
using namespace std;

int grid[100][100];

int main()
{
    int n,m,l,x1,x2,y1,y2;
    scanf("%d%d",&n,&m);

    scanf("%d",&l);

    for(int i=0 ; i<l ; ++i)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

        for(int j=x1 ; j<=x2 ; ++j)
        {
            for (int jj = y1; jj <= y2; jj++)
            {
                grid[j][jj]=1;
                
            }
    
        }

    }


    



    return 0;
}