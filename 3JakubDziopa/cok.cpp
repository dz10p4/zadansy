#include <bits/stdc++.h>
#define gcu getchar_unlocked
#define ff first
#define ss second
#define pb push_back
using namespace std;

int main()
{
    int n,m,cter=0;
    scanf("%d%d",&n,&m);


    while(n!=0&&m!=0)
    {
        if(n<m)swap(n,m);
        n-=m;
        cter++;
    }
    
    printf("%d",cter);


    return 0;
}