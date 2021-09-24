#include <stdio.h>
#include <vector>
using namespace std;

int bucket1[10001],bucket2[10001];

int main()
{
  vector<int> bruh;
  pair<int,int>para[2];
  int n,k,l,p,inp;
  scanf("%d%d%d%d",&n,&k,&l,&p);
  int lpr[n+1],ppr[n+1],ctl=0,ctr=0;
  lpr[n+1]=0;ppr[n+1]=0;
  for(int i=1 ; i<=l ; ++i)
  {
    scanf("%d",&inp);
    bucket1[inp]++;
  }

  // for(int i=1 ; i<=n ; ++i)
  // {
  //   lpr[i]=lpr[i-1]+bucket1[i];
  // }

  for(int i=1 ; i<=p ; ++i)
  {
    scanf("%d",&inp);
    bucket2[inp]++;
  }

  // for(int i=1 ; i<=n ; ++i)
  // {
  //   ppr[i]=ppr[i-1]+bucket2[i];
  // }

  for(int i=1 ; i<=n ; ++i)
  {
    if(bucket1[i]==1)
    {
      ctl++;
      if(ctl>1)para[0].first=ctl;
      if(ctl==1)
      {
          bruh.push_back(0);
          int braciszek=bruh.size()-1;
          para[0].first=ctl;para[0].second=braciszek;

      }
    else
    {
      ctl=0;bruh[para[0].second]=para[0].first;

    }
  }
    if(bucket2[i]==1)
    {
      ctr++;
      if(ctr>1)para[1].first=ctr;
      if(ctr==1)
      {
        bruh.push_back(0);
        int dachu=bruh.size()-1;
        para[1].first=ctr; para[1].second=dachu;

      }


    }
    else
    {
      ctr=0;bruh[para[1].second]=para[1].first;
    }


  }

  

for(int i=0 ; i<bruh.size() ; ++i)
{
  printf("%d ",bruh[i]);
}

  // for(int i=1 ; i<=n ; ++i)
  // {
  //   printf("%d ",lpr[i]);
  // }
  // printf("\n");
  // for(int i=1 ; i<=n ; ++i)
  // {
  //   printf("%d ",ppr[i]);
  // }


return 0;
}
