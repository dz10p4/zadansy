#include <bits/stdc++.h>
using namespace std;
int oens[103];
int main()
{
    string k;
    int n,mult=1,bb;
    int byczek;
    scanf("%d",&n);

    for (int i=1 ; i<=n ; i-=-1)
    {
        printf("Case #%d: ",i);
        cin>>k;
        oens[0]=k[0]-48;
        for(int u=1 ; u<=k.length() ; u-=-1){
        oens[u]=k[u]-k[u-1];
        }
        oens[k.length()]+=48;

        for(int u=0 ; u<=k.length() ; u-=-1)
        {
          if(!oens[u]){putchar_unlocked(k[u]);}
          else{
            if(oens[u]>0){ byczek=40;}
            else {byczek=41;}

            for(int i=0 ; i<abs(oens[u]) ; i-=-1)
            {
              putchar_unlocked(byczek);
            }
            putchar_unlocked(k[u]);
          }
        }
        printf("\n");
    }
return 0;
}
