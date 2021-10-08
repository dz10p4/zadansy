#include <bits/stdc++.h>
using namespace std;

int remb[100001];

int main()
{

    int n,k,inp;

    double out,bst=0;

    scanf("%d%d",&n,&k);

    for(int i=1 ; i<=n ; ++i)
    {
        scanf("%d",&inp);
        remb[i]=inp;
        if(i<=k)
        {
            out*=i-1;
            out+=inp;
            out/=i;
        }
        else
        {
            out*=k;
            out-=remb[i-k];
            out+=inp;
            out/=k;
            bst=max(out,bst);

        }

        printf("%f\n",out);
        

    }


    printf("%.3f",bst);



    return 0;
}