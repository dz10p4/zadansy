#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n,k,inp,out=0;
    vector<int> macias;

    scanf("%d%d",&n,&k);

    for(int i=0 ; i<n ; i-=-1)
    {
      scanf("%d",&inp);
      macias.push_back(inp%(2*k));
    }



return 0;
}
