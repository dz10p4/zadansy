#include <bits/stdc++.h>
using namespace std;

const int M=1000000007;

int koka1,koka2,siz;
char ch[1000001];

void charint1(int u)
{
        koka1=koka1|1<<ch[u]-'a';
        //koka1%=M;
}

void charint2(int u)
{
        koka2=koka2|1<<ch[u]-'a';
        //koka2%=M;
}

int main()
{
        int t,outer=1;

        scanf("%d",&t);
        //t=getchar_unlocked();
        //t-='0';
        //getchar_unlocked();
        for(int i=0; i<t; ++i)
        {
                //for(int u=0; ch[u-1]!=EOF &&ch[u-1]!='\n'; ++u)
                //{
                scanf("%s\n",ch);         //ch[u]=getchar_unlocked();
                siz=strlen(ch)+1;
                //}

                for(int u=0; u<(siz-1)/2; ++u)
                {
                        charint1(u);
                        charint2(siz-2-u);
                        koka1%=M;
                        koka2%=M;
                        if(koka1==koka2) {koka1=0; koka2=0; outer+=2;}
                        if(koka1==koka2&&siz%2==1&&u==(siz-1)/2-1) {outer--;}

                }

                if(!siz%2) outer++;


                siz=0;
                printf("%d\n",outer);
                outer=1;
                koka1=0; koka2=0;
        }
        return 0;
}
