#include <bits/stdc++.h>
using namespace std;

bool compsec(pair< pair<int,int>, pair<int,int> > a, pair<pair<int,int>,pair<int,int> > b)
{

        return a.first.second<b.first.second;

}
bool compthir(pair< pair<int,int>, pair<int,int> > a, pair<pair<int,int>,pair<int,int> > b)
{

        return a.second.first<b.second.first;

}
bool compforth(pair< pair<int,int>, pair<int,int> > a, pair<pair<int,int>,pair<int,int> > b)
{

        return a.second.second<b.second.second;

}
string maciass="macias\n";
int bucket[100001];

int main()
{
        int n,x,y,w,h,cteer=0;

        vector< pair < pair<int,int>, pair<int,int> > > macias;
        scanf("%d",&n);

        for(int i=0; i<n; ++i)
        {
                scanf("%d%d%d%d",&x,&y,&w,&h);
                macias.push_back(make_pair(make_pair(x,y),make_pair(w+x,h+y)));
        }




        //skalowanie
        sort(macias.begin(),macias.end());
        for(int i=0; i<n-1; ++i)
        {
                if(macias[i].first.first < macias[i+1].first.first) {macias[i+1].first.first=macias[i].first.first+1;}

        }
        sort(macias.begin(),macias.end(),compsec);
        //cout<<"macias"<<endl;
        for(int i=0; i<n-1; ++i) {

                if(macias[i].first.second < macias[i+1].first.second) {macias[i+1].first.second=macias[i].first.second+1;}

        }
        sort(macias.begin(),macias.end(),compthir);
        //cout<<"macias"<<endl;
        for(int i=0; i<n-1; ++i) {
                if(macias[i].second.first < macias[i+1].second.first) {macias[i+1].second.first=macias[i].second.first+1;}
        }
        sort(macias.begin(),macias.end(),compforth);
        //cout<<"macias"<<endl;
        for(int i=0; i<n-1; ++i) {
                if(macias[i].second.second < macias[i+1].second.second) {macias[i+1].second.second=macias[i].second.second+1;}

        }

        sort(macias.begin(),macias.end());


        // for(int i=0; i<macias.size(); ++i)
        // {
        //
        //         printf("%d %d %d %d\n",macias[i].first.first,macias[i].first.second,macias[i].second.first,macias[i].second.second);
        //
        // }

        for(int i=0; i<n; ++i)
        {

                for(int u=0; u<n; ++u)
                {
                        //if(u==i) break;
                        if(macias[u].first.first < macias[i].second.first&&macias[u].first.second<macias[i].second.second&&macias[u].second.first>macias[i].first.first&&macias[u].second.second>macias[i].first.second)
                        {
                                ++bucket[i];
                        }

                        //  cout<<maciass;

                }

                //fill(bucket,bucket+100001,0);
        }

        for(int i=0; i<n; ++i)
        {
                if(bucket[i]%2==0) ++cteer;
                //printf("%d\n",bucket[i]);
        }

        printf("%d",cteer);

        return 0;
}
