#include <bits/stdc++.h>
using namespace std;

bool odc(char a,char b)
{
    return a>b;
}

vector<int>t;

int main()
{
    int n,q,a,b,c;
    char o;
    scanf("%d%d\n",&n,&q);
    for(int i=0 ; i<n ; ++i)
    {
        o=getchar_unlocked();
        t.push_back(o-'a');
    }
    getchar_unlocked();
    
    for(int i=0 ; i<q ; ++i)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(c)sort(t.begin()+a-1,t.begin()+b);
        else 
        {
            sort(t.begin()+a-1,t.begin()+b,greater<int>());
            //reverse(t.begin()+a-1,t.begin()+b);
        }

        //for(auto I:t)printf("%c",I+'a');
    }

    for(auto I:t)printf("%c",I+'a');

    return 0;
}