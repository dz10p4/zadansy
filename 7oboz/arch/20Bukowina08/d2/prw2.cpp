#include <bits/stdc++.h>
using namespace std;
const int N=1<<18;
const int R=2*N;
int tree[R];
int wynik;
bool kochamprezesa[100001];
int boss=0;
int query (int w)
{
        wynik+=tree[w];
        if (w==1) return wynik;
        else query(w/2);
}

void add (int w, int p, int k, int x, int y, int val)
{

        if (k<x || p>y) return;
        if (x<=p && y>=k)
        {
                tree[w]+=val;
                return;
        }
        add(w*2,p,(p+k)/2,x,y,val);
        add(w*2,(p+k)/2+1,k,x,y,val);
}


int main()
{
        int n,a,b;

        pair<int,int> rutax[200001],rutay[200001],rutadzban[100001];



        scanf("%d",&n);
        for(int i=0; i<100001; ++i)
        {
                rutadzban[i].first=-1;

        }
        for(int i=0; i<n*2; i+=2)
        {
                scanf("%d%d%d%d",&rutax[i].first,&rutay[i].first,&a,&b);

                rutay[i+1].first=a+rutax[i+1].first;
                rutay[i+1].first=b+rutax[i+1].first;

                rutax[i].second=i;
                rutay[i].second=i;
                rutax[i+1].second=i;
                rutay[i+1].second=i;

        }

        sort(rutax,rutax+n);
        sort(rutay,rutay+n);


        for(int i=0; i<n*2; ++i)
        {
                if(rutadzban[rutay[i].second].first==-1) {rutadzban[rutay[i].second].first=i;}
                else {rutadzban[rutay[i].second].second=i;}

        }
        for(int i=0; i<n; ++i)
        {
                if(!kochamprezesa[rutay[i].second]) { add(1,0,N-1,rutadzban[rutay[i].second].first,rutadzban[rutay[i].second].second,1); if(query(rutay[i].first+N)%2==1) ++boss; }
                else {add(1,0,N-1,rutadzban[rutay[i].second].first,rutadzban[rutay[i].second].second,-1);};

                kochamprezesa[rutay[i].second]=!kochamprezesa[rutay[i].second];

                wynik=0;
        }

        printf("%d",boss);

        return 0;
}
