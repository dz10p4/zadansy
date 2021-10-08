#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    string k;
    int mct=0,pct=0;
    cin>>k;
    int n=k.length();
    for(int i=0 ; i<n ; ++i)
    {
        if(k[i]=='-')
        {
            mct++;       
        }
        else
        {
            pct++;
            if(mct>0)
            {
                if(mct%2==0)
                {
                    pct+=mct/2;
                    mct=0;
                }
                else
                {
                    v.push_back(pct);
                    v.push_back(mct/2);
                    pct=0;mct=0;
                }
            }
        }
    }

    for(int i=0 ; i<v.size() ; ++i)
    {
        printf("%d ",v[i]);
    }



    return 0;
}