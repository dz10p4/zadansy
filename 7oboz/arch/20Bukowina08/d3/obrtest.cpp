#include <bits/stdc++.h>
using namespace std;

int main()
{

        int a1[11]={1, 3, 1, 4, 3, 2, 3, 4, 2, 4};
        int a2[11]={2, 1, 2, 4, 1, 4, 3, 4, 3, 1};

        sort(a1,a1+11);
        sort(a2,a2+11);

        for(int i=0; i<11; ++i) {printf("%d",a1[i]);}
        printf("\n");
        for(int i=0; i<11; ++i) {printf("%d",a2[i]);}
        return 0;
}
