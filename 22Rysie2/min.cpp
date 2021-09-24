#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> v;
    string k;
    int n,minc=0,op=0;
    cin>>k;
    n=k.length();

    for(int i=0 ; i<n ; ++i)
    {
        if(k[i]=='+')
        {
            if(minc>0&&minc%2)
            {
               v.push_back(minc/2);
               minc=0;               
               
            }
            else if(minc>0&&!minc%2){op+=minc/2;minc=0;}

            op++;

        }
        else{if(op)v.push_back(op); op=0; minc++;}
        //printf("%d ",minc);

    }
    if(k[n-1]=='+')
    {
        v.push_back(minc/2); v.push_back(op);
    }
    else
    {
        v.push_back(op);v.push_back(minc/2);
    }
    for(int i=0 ; i<v.size() ; ++i)
    {
        printf("%d ",v[i]);
    }


    //printf("%d",op);




    return 0;
}