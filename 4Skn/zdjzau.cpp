#include <bits/stdc++.h>
using namespace std;

vector<string> test;

int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1 ; i<=n ; ++i)
    {
        test.push_back(to_string(i));
    }

    sort(test.begin(),test.end());


    for(int i=0 ; i<n ; ++i)
    {

        cout<<test[i]<<"\n";
    }





    return 0;
}