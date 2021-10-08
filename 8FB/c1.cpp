#include <bits/stdc++.h>
#define gcu getchar_unlocked
#define ff first
#define ss second
#define pb push_back
using namespace std;

int bucket[29];

int main()
{
    int n,cc=0,vc=0,cb=0,vb=0,v=0,c=1,ppv=0,ppc=0,xd1=0,xd2=0;
    char ch;
    scanf("%d\n",&n);
    
    
    for(int i=0 ; i<n ; ++i)
    {
        while((ch=gcu())!=EOF&&ch!='\n')
        {
            switch (ch)
            {
                case 'A':
                    vc++;
                    break;
                case 'E':
                    vc++;
                    break;
                case 'I':
                    vc++;
                    break;
                case 'O':
                    vc++;
                    break;
                case 'U':
                    vc++;
                    break;
                default:
                    cc++;
                    break;
            }
            bucket[ch-'A']++;
        }

        for(int u=0 ; u<28 ; ++u)
        {
            if
            (
                u+'A'=='A'||
                u+'A'=='E'||
                u+'A'=='I'||
                u+'A'=='O'||
                u+'A'=='U'            
            )
            {
                if(bucket[u]>vb){vb=bucket[u];v=u;}
            }
            else
            {
                if(bucket[u]>cb){cb=bucket[u];c=u;}
            }

        }
        for(int u=0 ; u<28 ; ++u)
        {
            if
            (
                u+'A'=='A'||
                u+'A'=='E'||
                u+'A'=='I'||
                u+'A'=='O'||
                u+'A'=='U'         
            )
            {
                if(u!=v)ppv+=2*bucket[u];
                ppc+=bucket[u];
            }
            else
            {
                ppv+=bucket[u];
                if(u!=c)ppc+=2*bucket[u];
                
            }

        }

        printf("Case #%d: %d\n",i+1,min(ppc,ppv));
        
        cc=0;vc=0;fill(bucket,bucket+30,0);ppc=0;ppv=0;vb=0;cb=0;
    }



    return 0;
}