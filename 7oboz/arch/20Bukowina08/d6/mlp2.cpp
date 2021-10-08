#include <bits/stdc++.h>
using namespace std;


long long podst=1;
int podsta=27;
long long MODULO=10e9+7;


long long h1,h2;

void hash1(char p)
{

        h1=(h1+((p-'a')*podst))%MODULO;
        //if(h1<0) h1=(h1+MODULO)%MODULO;


        //printf("%d\n",h1);

}

void hash2(char p)
{

        h2=(h2*podsta)%MODULO;
        h2=(h2+(p-'a'))%MODULO;
        //if(h2<0) h1=(h2+MODULO)%MODULO;

}





int main()
{

        int n;
        char c='a';
        scanf("%d",&n);
        getchar_unlocked();
        while(c!=EOF&&c!='\n')
        {

                c=getchar_unlocked();

                if(c==EOF||c=='\n') break;


                hash1(c);
                hash2(c);

                podst=(podst*27)%MODULO;

                //        printf("%d ",c-'a');

        }

        //printf("%lld %lld\n",h1, h2);

        if(h1==h2) printf("TAK");
        else printf("NIE");


        return 0;
}
