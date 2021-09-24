#include <bits/stdc++.h>
using namespace std;

vector<int>divisors,brus;

int main()
{

    int n,inp,pds=1;
    scanf("%d",&n);
    
    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&inp);

        
        while(inp>=1||inp <= -1)
        {
            divisors.push_back(inp%(-2));
            
            inp/=-2;
        }





        divisors.clear();
    }



    return 0;
}