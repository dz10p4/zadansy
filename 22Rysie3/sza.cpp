#include <stdio.h>
using namespace std;

int sumk[1001],sumw[1001],tab[1001][1001];


int main()
{
    int n,m,zliczacz=0;

    scanf("%d%d",&n,&m);

    for(int i=1 ; i<=n ; ++i)
    {
        for(int j=1 ; j<=m ; ++j)
        {

            scanf("%d",&tab[i][j]);

            zliczacz+=tab[i][j];

        }
        sumw[i]=zliczacz;
        zliczacz=0;
    }

    for(int i=1 ; i<=m ; ++i)
    {
        for(int j=1 ; j<=n ; ++j)
        {
            zliczacz+=tab[j][i];

            


        }

    }






    return 0;
}