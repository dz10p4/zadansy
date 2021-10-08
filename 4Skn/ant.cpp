#include <bits/stdc++.h>

using namespace std;
int mx=__INT_MAX__;
vector<int> macias={1,2,4,6,12,24,36,48,60,120,180,240,360,720,840,1260,1680,2520,5040,7560,10080,15120,20160,25200,27720,45360,50400,55440,83160,110880,166320,221760,277200,332640,498960,554400,665280,720720,1108800,132710400,2000000021};

int main()
{
    int n;
    scanf("%d",&n);
    // vector<int>::iterator bruh;
    // sort(macias.begin(),macias.end());
    // bruh=upper_bound(macias.begin(),macias.end(),n);
    // int outer=(bruh-macias.begin());
    for(int i=0 ; i<macias.size() ; ++i)
    {
        if(macias[i]>n){mx=macias[i-1];break;}
    }

    printf("%d",mx);
    return 0;
}