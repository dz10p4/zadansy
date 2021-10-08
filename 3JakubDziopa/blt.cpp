#include <bits/stdc++.h>
using namespace std;

string ch;
int charbucket[22],charbucket2[22];
int lol[1000001];
int leny[1000001];

void z1()
{
        int n,jed=0,dwa=1,mxjed=0;
        scanf("%d",&n);
        for(int i=0; i<n; ++i)
        {
            cin>>ch;
            leny[i]=ch.length();
            for(int u=0; u<leny[i]; ++u)
            {
                if(ch[u]>60) lol[i]=lol[i]|1<<ch[u]-87;
                else lol[i]=lol[i]|1<<ch[u]-'0';
            }
        }
        sort(lol,lol+n);
        int po=1;
        for(int i=0; i<n-1; ++i)
        {
            if(lol[i]==lol[i+1]) {++po;}
            else
            {
                if(po==jed) {dwa++; }
                if(po>jed) {jed=po; dwa=1; }
                po=1;
            }
        }
        if(po==jed)dwa++;
        if(po>jed) {jed=po; dwa=1; po=1;}
        printf("%d\n%d",jed,dwa);
        return;
}

void z2()
{
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; ++i)
        {
                cin>>ch;
                leny[i]=ch.length();
                for(int u=0; u<leny[i]; ++u)
                {
                        if(ch[u]>60) lol[i]=lol[i]|1<<ch[u]-87;
                        else lol[i]=lol[i]|1<<ch[u]-'0';
                }
        }
        int pom=0,mx=0;
        for(int i=0; i<n-1; ++i)
        {
                if(leny[n-1]==leny[i] &&__builtin_popcount(lol[i]^lol[n-1])==2) {++pom;}
        }
        printf("%d",pom);
        return;
}


int main()
{
        short int c;
        scanf("%hd",&c);
        if(c==1) z1();
        if(c==2) z2();
        return 0;
}
