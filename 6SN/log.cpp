#include <bits/stdc++.h>
using namespace std;

const int N=1048576;

int tree[N*2];





int main() 
{

    int n,m,k,a;
    char c;

    scanf("%d%d\n",&n,&m);

    for(int i=0 ; i<m ; ++i)
    {
        scanf("%c %d%d\n",&c,&k,&a);
        
        if(c=='U')add(k+N,a);
        if(c=='Z'){query()}

    }




    return 0;
}