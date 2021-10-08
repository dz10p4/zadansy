#include <bits/stdc++.h>
using namespace std;

int main()
{
string k;

cin>>k;


int ip=0,mx=0,act=1;


for(int i=0 ; i<k.length() ; i-=-1)
{
  if(i+1 < k.length() && k[i]==k[i+1]) ++act;
  else
  {
    if(k[i]=='+')
    {
      ip+=act;
    }
    else
    {
      ip+=act/2;
      if(act%2)
      {
        mx=max(mx,ip);
        ip=act/2;
      }
    }
    act=1;
  }
}

ip+=act/2;
mx=max(mx,ip);

printf("%d",mx);


  return 0;
}
