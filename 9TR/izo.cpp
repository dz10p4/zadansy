#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
    vector<int>v,vk;
    int z1=0,z2=0;
    int n,inp,j1=0;
    scanf("%d",&n);
    int j2=n-1;
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&inp);
        v.pb(inp);
        z1+=inp;
    }

    sort(v.begin(),v.end());

    for(int i=0 ; i<n ; ++i)
    {
        if(i%2){vk.pb(v[j1]);j1++;}
        else {vk.pb(v[j2]);j2--;}
    }

    for(int i=0 ; i<vk.size()-1 ; ++i)
    {
        z2+=max(0,vk[i]-vk[i+1]);
    }

    printf("%d",z1+z2);

    return 0;
}