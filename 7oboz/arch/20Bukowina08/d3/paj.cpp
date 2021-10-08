#include <bits/stdc++.h>
using namespace std;

int main()
{
        vector<int> macias[20001];
        int d,n1,n2,s1,s2;
        bool y=1;
        scanf("%d",&d);

        for(int i=0; i<d; ++i)
        {

                scanf("%d",&n1);

                for(int u=0; u<n1*2-3; ++u)
                {
                        scanf("%d%d",&s1,&s2);

                        macias[s1].push_back(s2);
                        macias[s2].push_back(s1);

                }
                scanf("%d",&n2);

                for(int u=0; u<n2*4-6; ++u)
                {
                        scanf("%d%d",&s2[i]);
                }
                if(n1!=n2) {printf("NIE\n"); y=0; goto MACIAS;}
                sort(s1,s1+n1);
                sort(s2,s2+n2);
                cout<<"";
                for(int u=0; u<n1-1; ++u)
                {
                        if(s1[u]!=s2[u]) {printf("NIE\n"); y=0; break;}

                }

                if(y) printf("TAK\n");
MACIAS:
                y=1;

        }


        return 0;
}
