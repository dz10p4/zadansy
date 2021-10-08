#include <bits/stdc++.h>
using namespace std;

set<string> xd;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    short n;
    string k;
    short x1=0,x2=0,x3=0,zmk=0;
    cin>>n;

    

    for(int i=0 ; i<n ; ++i)
    {
        cin>>k;
        if(k[0]=='5')
        {   
            if(k[1]=='A')
            {
                if(xd.count("5A"))x1=1;
            }
            if(k[1]=='B')
            {
                if(xd.count("5B"))x2=1;
            }
            if(k[1]=='C')
            {
                if(xd.count("5C"))x3=1;
            }


        }
        xd.insert(k);
    }
    zmk=x1+x2+x3+xd.size();

    if(zmk>=18)cout<<"TAK";
    else cout<<"NIE";

    //cout<<zmk;//<<xd.count(x1)<<" "<<xd.count(x2)<<" "<<xd.count(x3);

    return 0;
}