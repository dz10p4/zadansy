#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool uw=0;
    int t,n,x,y,zk=0;

    scanf("%d",&t);

    for(int tr=0 ; tr<t ; ++tr)
    {
        scanf("%d",&n);
        for(int u=0 ; u<n ; ++u)
        {
            scanf("%d%d",&x,&y);

            
            if(!y%2&&x>0)zk+=1;
            else if(y%2&&x>1)zk+=2;
            else if(y%2&&x==1)zk+=1;
            zk+=y;
            //cout<<"macias";
            //zk=0;
            if(x>1&&y>=2){uw=1;break;}
        }
        if(uw){uw=0;printf("Malgosia\n");continue;}
        if(!(zk%2)){printf("Jas\n");}
        else printf("Malgosia\n");
        printf("%d",zk);
        zk=0;

    }






    return 0;
}