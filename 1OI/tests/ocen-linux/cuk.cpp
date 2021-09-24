#include <bits/stdc++.h>
#define pb push_back
#define cc count.count
using namespace std;
int dp[4][11];
bool used[300001];
bool uwaloned[3];
pair<int,int> products[28];
long long zmwyn=0;
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
  set<int> count;
  int mx=__INT_MAX__;
  pair<int,int> indexes[3][3];
  int n,din,pin,rin,md=mx,mp=mx,mr=mx,wsd,wsp,wsr,xd1,xd2,xd3;
  int dm1,dm2,dm3,pm1,pm2,pm3,rm1,rm2,rm3;
  scanf("%d",&n);
  vector<int> d,p,r;
  vector<pair<pair<int,int>,int>>all;
  for(int i=0 ; i<n ; ++i)
  {
    scanf("%d%d%d",&din,&pin,&rin);
    if(din>0)uwaloned[0]=1;
    if(pin>0)uwaloned[1]=1;
    if(rin>0)uwaloned[2]=1;
    d.pb(din);p.pb(pin);r.pb(rin);
  }
  xd1=-1;xd2=-1;xd3=-1;
  for(int i=0 ; i<n ; i++)
  {
    if(p[i]+r[i]<md){md=p[i]+r[i];wsd=i;}
  }
  md=mx;
  xd1=wsd;
  for(int i=0 ; i<n ; i++)
  {
    if(i==xd1)++i;
    if(i==n)break;
    if(p[i]+r[i]<md){md=p[i]+r[i];wsd=i;}
  }
  md=mx;
  xd2=wsd;
  for(int i=0 ; i<n ; i++)
  {
    if(i==xd1)++i;
    if(i==xd2)++i;
    if(i==n)break;
    if(p[i]+r[i]<md){md=p[i]+r[i];wsd=i;}
  }
  xd3=wsd;

  indexes[0][0].first=xd1;
  indexes[0][1].first=xd2;
  indexes[0][2].first=xd3;

  count.insert(xd1);
  count.insert(xd2);
  count.insert(xd3);

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
  if(i==xd1)++i;
  if(i==n)break;
  if(d[i]+r[i]<md){md=d[i]+r[i];wsd=i;}
}
md=mx;
xd2=wsd;
for(int i=0 ; i<n ; i++)
{
  if(i==xd1)++i;
  if(i==xd2)++i;
  if(i==n)break;
  if(d[i]+r[i]<md){md=d[i]+r[i];wsd=i;}
}
xd3=wsd;

indexes[1][0].first=xd1;
indexes[1][1].first=xd2;
indexes[1][2].first=xd3;

count.insert(xd1);
count.insert(xd2);
count.insert(xd3);

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
  if(i==xd1)++i;
  if(i==n)break;
  if(p[i]+d[i]<md){md=p[i]+d[i];wsd=i;}
}
md=mx;
xd2=wsd;
for(int i=0 ; i<n ; i++)
{
  if(i==xd1)++i;
  if(i==xd2)++i;
  if(i==n)break;
  if(p[i]+d[i]<md){md=p[i]+d[i];wsd=i;}
}
xd3=wsd;

indexes[2][0].first=xd1;
indexes[2][1].first=xd2;
indexes[2][2].first=xd3;

count.insert(xd1);
count.insert(xd2);
count.insert(xd3);

indexes[2][0].second=p[xd1]+d[xd1];
indexes[2][1].second=p[xd2]+d[xd2];
indexes[2][2].second=p[xd3]+d[xd3];


sort(indexes[0],indexes[0]+3,comps);
sort(indexes[1],indexes[1]+3,comps);
sort(indexes[2],indexes[2]+3,comps);


int ind1,ind2,ind3;

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


for(int i=0 ; i<27 ; ++i)
{
  int zk=products[i].second;
  if(indexes[0][zk/9].first!=indexes[1][(zk/3)%3].first&&indexes[1][(zk/3)%3].first!=indexes[2][zk%3].first&&indexes[0][zk/9].first!=indexes[2][zk%3].first)
  {
    ind1=zk/9;ind2=(zk/3)%3;ind3=zk%3;break;
  }
}

long long wpt1=0;
if(uwaloned[0])wpt1+=indexes[0][ind1].second;
else indexes[0][ind1].first=-1;
if(uwaloned[1])wpt1+=indexes[1][ind2].second;
else indexes[0][ind2].first=-1;
if(uwaloned[2])wpt1+=indexes[2][ind3].second;
else indexes[0][ind3].first=-1;

for(int i=0 ; i<n ; ++i)
{
  if(i==indexes[0][ind1].first||i==indexes[1][ind2].first||i==indexes[2][ind3].first)continue;
  else zmwyn+=summin(d[i],p[i],r[i]);
}

  zmwyn+=wpt1;

  printf("%lld",zmwyn);


  return 0;
}