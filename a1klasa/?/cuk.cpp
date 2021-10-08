#include <bits/stdc++.h>
#define pb push_back
#define cc count.count
using namespace std;
bool used[300001];
bool uwaloned[3];
pair<long long,long long> products[28];
long long zmwyn=0,be[3000001],fans;
bool comps(pair<int,int>a,pair<int,int>b)
{
  if(a.second==b.second)return a.first<b.first;
  return a.second<b.second;
}
bool compd(pair<pair<int,int>,int>a,pair<pair<int,int>,int>b)
{
  if(a.second==b.second)return a.first<b.first;
  return a.second<b.second;
}
int maxt(int a,int b,int c)
{
  int xd=max(max(a,b),c);
  return xd;
}
int summin(int a,int b,int c)
{
  int tablicow[3];

  tablicow[0]=a;tablicow[1]=b;tablicow[2]=c;
  sort(tablicow,tablicow+3);

  return tablicow[0]+tablicow[1];
}


int main()
{
  //set<int> count;
  long long mx=__INT64_MAX__;
  pair<long long,long long> indexes[4][4];
  long long n,din,pin,rin,md=mx,mp=mx,mr=mx,wsd,wsp,wsr,xd1,xd2,xd3;
  long long dm1,dm2,dm3,pm1,pm2,pm3,rm1,rm2,rm3,pall=0,dall=0,rall=0;
  scanf("%lld",&n);
  vector<int> d,p,r;

  for(int i=0 ; i<3 ; ++i)
  {
    indexes[i][3].first=-1;
  }

  //wczytywanie

  for(int i=0 ; i<n ; ++i)
  {
    scanf("%lld%lld%lld",&din,&pin,&rin);
    if(din>0)uwaloned[0]=1;
    if(pin>0)uwaloned[1]=1;
    if(rin>0)uwaloned[2]=1;
    be[i]=summin(pin,rin,din);
    fans+=be[i];
    pall+=pin;dall+=din;rall+=rin;
    d.pb(din);p.pb(pin);r.pb(rin);
  }
  xd1=-1;xd2=-1;xd3=-1;


  //zliczanie najbardziej opłacalnych gablot
  md=mx;
  xd1=0;
  for(int i=0 ; i<n ; i++)
  {
    if(p[i]+r[i]<md){md=p[i]+r[i];wsd=i;}
  }
  md=mx;
  xd1=wsd;
  for(int i=0 ; i<n ; i++)
  {
    if(i==xd1)continue;
    if(p[i]+r[i]<md){md=p[i]+r[i];wsd=i;}
  }
  md=mx;
  xd2=wsd;
  for(int i=0 ; i<n ; i++)
  {
    if(i==xd1)continue;
    if(i==xd2)continue;
    if(p[i]+r[i]<md){md=p[i]+r[i];wsd=i;}
  }
  xd3=wsd;

  indexes[0][0].first=xd1;
  indexes[0][1].first=xd2;
  indexes[0][2].first=xd3;

  indexes[0][0].second=p[xd1]+r[xd1];
  indexes[0][1].second=p[xd2]+r[xd2];
  indexes[0][2].second=p[xd3]+r[xd3];

  md=mx;
  xd1=-1;xd2=-1;xd3=-1;
  for(int i=0 ; i<n ; i++)
  {
    if(d[i]+r[i]<md){md=d[i]+r[i];wsd=i;}
  }
  md=mx;
  xd1=wsd;
  for(int i=0 ; i<n ; i++)
  {
    if(i==xd1)continue;
    if(d[i]+r[i]<md){md=d[i]+r[i];wsd=i;}
  }
  md=mx;
  xd2=wsd;
  for(int i=0 ; i<n ; i++)
  {
    if(i==xd1)continue;
    if(i==xd2)continue;
    if(d[i]+r[i]<md){md=d[i]+r[i];wsd=i;}
  }
  xd3=wsd;

  indexes[1][0].first=xd1;
  indexes[1][1].first=xd2;
  indexes[1][2].first=xd3;


  indexes[1][0].second=d[xd1]+r[xd1];
  indexes[1][1].second=d[xd2]+r[xd2];
  indexes[1][2].second=d[xd3]+r[xd3];

  md=mx;
  xd1=-1;xd2=-1;xd3=-1;
  for(int i=0 ; i<n ; i++)
  {
    if(p[i]+d[i]<md){md=p[i]+d[i];wsd=i;}
  }
  md=mx;
  xd1=wsd;
  for(int i=0 ; i<n ; i++)
  {
    if(i==xd1)continue;
    if(p[i]+d[i]<md){md=p[i]+d[i];wsd=i;}
  }
  md=mx;
  xd2=wsd;
  for(int i=0 ; i<n ; i++)
  {
    if(i==xd1)continue;
    if(i==xd2)continue;
    if(p[i]+d[i]<md){md=p[i]+d[i];wsd=i;}
  }
  xd3=wsd;

  indexes[2][0].first=xd1;
  indexes[2][1].first=xd2;
  indexes[2][2].first=xd3;

  indexes[2][0].second=p[xd1]+d[xd1];
  indexes[2][1].second=p[xd2]+d[xd2];
  indexes[2][2].second=p[xd3]+d[xd3];


  sort(indexes[0],indexes[0]+3,comps);
  sort(indexes[1],indexes[1]+3,comps);
  sort(indexes[2],indexes[2]+3,comps);


  //gabloty zliczone


  long long ind1=0,ind2=0,ind3=0;
  long long wpt1=0;

  //wszystkie wartości występują

  if(uwaloned[0]&&uwaloned[1]&&uwaloned[2]){
    for(int i=0 ; i<3 ; ++i)
    {
      for(int u=0 ; u<3 ; ++u)
      {
        for(int y=0 ; y<3 ; ++y)
        {
          products[i*9+u*3+y].first=indexes[0][i].second+indexes[1][u].second+indexes[2][y].second;
          products[i*9+u*3+y].second=i*9+u*3+y;
        }
      }
    }

    sort(products,products+27);

    //printf("macias");

    for(int i=0 ; i<27 ; ++i)
    {
      int zk=products[i].second;
      if(indexes[0][zk/9].first!=indexes[1][(zk/3)%3].first&&indexes[1][(zk/3)%3].first!=indexes[2][zk%3].first&&indexes[0][zk/9].first!=indexes[2][zk%3].first)
      {
        ind1=zk/9;ind2=(zk/3)%3;ind3=zk%3;break;
      }
    }

    wpt1+=indexes[0][ind1].second;
    wpt1+=indexes[1][ind2].second;
    wpt1+=indexes[2][ind3].second;


  }


  //nie ma trzeciej wartości


  else if(uwaloned[0]&&uwaloned[1]&&!uwaloned[2])
  {
    for(int u=0 ; u<3 ; ++u)
    {
      for(int y=0 ; y<3 ; ++y)
      {
        products[u*3+y].first=indexes[0][u].second+indexes[1][y].second-d[indexes[0][u].first]-p[indexes[1][y].first];
        

        products[u*3+y].second=u*3+y;
      }
    }

    sort(products,products+9);

    for(int i=0 ; i<9 ; ++i)
    {
      int zk=products[i].second;
      if(indexes[0][zk/3].first!=indexes[1][zk%3].first)
      {
        ind1=zk/3;ind2=zk%3;ind3=3;break;
      }
    }
    //cout<<"macias"<<endl;
    wpt1+=indexes[0][ind1].second;
    wpt1+=indexes[1][ind2].second;
   


  }

  //nie ma drugiej wartości

  else if(uwaloned[0]&&!uwaloned[1]&&uwaloned[2])
  {
    for(int u=0 ; u<3 ; ++u)
    {
      for(int y=0 ; y<3 ; ++y)
      {
        products[u*3+y].first=indexes[0][u].second+indexes[2][y].second-r[indexes[0][u].first]-p[indexes[2][y].first];
        products[u*3+y].second=u*3+y;
      }
    }

    sort(products,products+9);

    for(int i=0 ; i<9 ; ++i)
    {
      int zk=products[i].second;
      if(indexes[0][zk/3].first!=indexes[2][zk%3].first)
      {
        ind1=zk/3;ind2=3;ind3=zk%3;break;
      }
    }

    wpt1+=indexes[0][ind1].second;
    wpt1+=indexes[2][ind3].second;
   


  }

  //nie ma pierwszej wartości

  else if(!uwaloned[0]&&uwaloned[1]&&uwaloned[2])
  {
    for(int u=0 ; u<3 ; ++u)
    {
      for(int y=0 ; y<3 ; ++y)
      {
        products[u*3+y].first=indexes[1][u].second+indexes[2][y].second-r[indexes[1][u].first]-d[indexes[2][y].first];
        products[u*3+y].second=u*3+y;
      }
    }

    sort(products,products+9);

    for(int i=0 ; i<9 ; ++i)
    {
      int zk=products[i].second;
      if(indexes[1][zk/3].first!=indexes[2][zk%3].first)
      {
        ind1=3;ind2=zk/3;ind3=zk%3;break;
      }
    }

    wpt1+=indexes[1][ind2].second;
    wpt1+=indexes[2][ind3].second;
    

  }
  else{printf("0");return 0;}

  // sort(products,products+27);


  // for(int i=0 ; i<27 ; ++i)
  // {
  //   int zk=products[i].second;
  //   if(indexes[0][zk/9].first!=indexes[1][(zk/3)%3].first&&indexes[1][(zk/3)%3].first!=indexes[2][zk%3].first&&indexes[0][zk/9].first!=indexes[2][zk%3].first)
  //   {
  //     ind1=zk/9;ind2=(zk/3)%3;ind3=zk%3;break;
  //   }
  // }


  // for(int i=0 ; i<3 ; ++i)
  // {
  //   for(int u=0 ; u<3 ; ++u)
  //   {
  //     printf("%lld %lld\n",indexes[i][u].first,indexes[i][u].second);
  //   }
  //   printf("\n");
  // }

  //printf("\n%d %d %d\n",ind1,ind2,ind3);

  // if(uwaloned[0])wpt1+=indexes[0][ind1].second;
  // //else indexes[0][ind1].first=-1;
  // if(uwaloned[1])wpt1+=indexes[1][ind2].second;
  // //else indexes[0][ind2].first=-1;
  // if(uwaloned[2])wpt1+=indexes[2][ind3].second;
  // //else indexes[0][ind3].first=-1;
  //printf("\n %lld   %lld \n",wpt1,fans);
  for(int i=0 ; i<n ; ++i)
  {
    if(i==indexes[0][ind1].first||i==indexes[1][ind2].first||i==indexes[2][ind3].first)continue;
    else zmwyn+=summin(d[i],p[i],r[i]);
  }

   zmwyn+=wpt1;
   cout<<zmwyn;
  //printf("%lld + %lld = %lld",zmwyn,wpt1,zmwyn+wpt1);
   

  return 0;
}