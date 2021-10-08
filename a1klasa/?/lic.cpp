#include <bits/stdc++.h>
using namespace std;
int mx=__INT_MAX__;


int zoas=0;
vector<int> wew,zew,lacz,lacz2;

int conve(int a)
{
    return zoas-a-2;
}

int main()
{
    int updatestatus=mx;
    int n,z,inp,inpp,prop=0,lpoper,countednum,operatedzm;
    char kowski;
    scanf("%d%d",&n,&z);
    zoas=n;
    getchar_unlocked();
    for(int i=0 ; i<n-1 ; ++i)
    {
        kowski=getchar_unlocked();
        kowski-='0';
        inp=kowski;
        wew.push_back(inp);
    }
    getchar_unlocked();
    for(int i=0 ; i<n-1 ; ++i)
    {
        kowski=getchar_unlocked();
        kowski-='0';
        inp=kowski;
        zew.push_back(inp);
    }
    getchar_unlocked();
    lpoper=pow(10,n-2);
    for(int i=n-2 ; i>=0; --i)
    {   
        countednum=zew[i]+wew[i];
        lacz.push_back(countednum);
        lacz2.push_back(countednum);
        lpoper/=10;
    }
    

    for(int i=0 ; i<n-2 ; ++i)
    {
        lacz[i+1]+=lacz[i]/10;
        lacz[i]%=10;
    }
    

    for(int i=0 ; i<z ; ++i)
    {
        kowski=getchar_unlocked();
        getchar_unlocked();
        if(kowski=='S')
        {
            scanf("%d",&inp);

            if(updatestatus!=mx)
            {
                lacz=lacz2;
                for(int u=updatestatus-1 ; u<n ; ++u)
                {
                    lacz[u+1]=lacz[u+1]+lacz[u]/10;
                    lacz[u]=lacz[u]%10;
                    //cout<<"macias";
                }
                cout<<"macias";
                updatestatus=mx;
                printf("%d\n",lacz[inp-1]);
            }
            else if(prop==1){printf("%d\n",lacz[inp-1]);}
            else printf("%d\n",lacz[inp-1]);
            
            prop=1;
        }
        if(kowski=='W')
        {
            scanf("%d%d",&inp,&inpp);

            operatedzm=lacz2[inp-1];

            if(operatedzm>=10&&operatedzm-wew[conve(inp-1)]+inpp<10)
            {
                updatestatus=min(inp,updatestatus);
            }
            else if(operatedzm<10&&operatedzm-wew[conve(inp-1)]+inpp>=10)
                 {
                    updatestatus=min(inp,updatestatus);
                 }
            
            lacz2[inp-1]=inpp+zew[conve(inp-1)];
            wew[conve(inp-1)]=inpp;
            prop=2;
        }
        if(kowski=='Z')
        {
            scanf("%d%d",&inp,&inpp);

            operatedzm=lacz2[inp-1];

            if(operatedzm>=10&&operatedzm-zew[conve(inp-1)]+inpp<10)
            {
                updatestatus=min(inp,updatestatus);
            }
            else if(operatedzm<10&&operatedzm-zew[conve(inp-1)]+inpp>=10)
                 {
                    updatestatus=min(inp,updatestatus);
                 }
            lacz2[inp-1]=inpp+wew[conve(inp-1)];
            zew[conve(inp-1)]=inpp;
            prop=3;
        }
        getchar_unlocked();
    }

    for(int i=n-2 ; i>=0 ; --i)
    {
        printf("%d ",lacz2[i]);
    }

    printf("\n");

    for(int i=n-2 ; i>=0 ; --i)
    {
        printf("%d ",lacz[i]);
    }
    


    return 0;
}