#include <stdio.h>
#include <vector>
#include <utility>
#include <algorithm>
#include <queue>
#include <iostream>
#include <set>
using namespace std;

int[1001] lyda;


bool compy(pair<pair<int,int>,int>a,pair<pair<int,int>,int>b)
{
        if(a.first.first*b.first.second==a.first.second*b.first.first) return a.first.first>b.first.first;
        return a.first.first*b.first.second<a.first.second*b.first.first;
}

int main()
{
        set<int> ruta;
        priority_queue<pair<int,int> > dachu;
        vector<pair<pair<int,int>,int> > macias;

        int cter=0,n,x,y,l,x1,y1,x2,y2;

        scanf("%d",&n);
        for(int i=0; i<n; ++i)
        {
                scanf("%d%d%d",&x,&y,&l);

                x1=x;
                y1=y+l;
                x2=x+l;
                y2=y;

                //cout<<"x1="<<x1<<" y1="<<y1<<" x2="<<x2<<" y2="<<y2<<endl;

                macias.push_back(make_pair(make_pair(x1,y1),i));
                macias.push_back(make_pair(make_pair(x2,y2),i));
        }
        printf("\n");
        sort(macias.begin(),macias.end(),compy);

        for(int i=0; i<macias.size(); ++i)
        {
                //printf("%d %d %d\n", macias[i].first.first,macias[i].first.second,macias[i].second);

        }

        for(int i=0; i<n*2;)
        {


          do
          {

            





          }






















          // while(!lyda[dachu.top().second]&&!dachu.empty()){dachu.pop();}
          //
          //       if(!lyda[macias[i].second]) {++lyda[macias[i].second];
          //                                    dachu.push(make_pair(macias[i].first.first,macias[i].second));
          //
          //
          //
          //                                  }
          //       else{--lyda[macias[i].second];}






        }


        printf("%d",cter);

        return 0;
}
