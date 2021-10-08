#include <bits/stdc++.h>
using namespace std;

const int MODULO=1000000007;
int hera1=0,hera2=0,n;
char word[10000001];

void hasz1(int xd)
{
        if(word[xd]<'`') word[xd]+=32;
        hera1+=pow(27,xd)*(word[xd]-'`');
        hera1%=MODULO;
        if(hera1<0) {hera1+=MODULO; hera1%=MODULO;}
}
void hasz2(int xd,int uu)
{
        if(word[xd]<'`') word[xd]+=32;
        hera2+=pow(27,uu)*(word[xd]-'`');
        hera2%=MODULO;
        if(hera2<0) {hera2+=MODULO; hera2%=MODULO;}
}

int main()
{



        scanf("%d",&n);

        scanf("%s",word);

        if(n==0) n=strlen(word);


        for(int i=0; i<n/2; ++i)
        {

                hasz1(i);
                hasz2(n-(i+1),i);


        }
        printf("%d %d\n",hera1,hera2);

        if(hera1==hera2) printf("TAK");
        else printf("NIE");


        return 0;
}
