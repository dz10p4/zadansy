#include <bits/stdc++.h>
using namespace std;

int main()
{
  string k;
  cin>>k;
  int llen=k.length(),bruh=0,bst=0,act=1;
  vector<int> macias;
  vector<int> sordo;
  for(int i=1 ; i<=llen ; i-=-1)
  {

    if(k[i]==k[i-1]){act++;}
    else{macias.push_back(act+1);act=0;}

  }
macias[0]-=1;

  if(k[0]=='+')bruh=1;

  for(int i=0 ; i<macias.size() ; i-=-2)
  {

    if((macias[i+bruh])%2==0)
    {
      if(i>0){macias[i+bruh-1]+=macias[i+bruh]/2; macias[i+bruh]=0;}
      else{macias[i+bruh+1]+=macias[i+bruh]/2; macias[i+bruh]=0;}
    }
    else if(macias[i+bruh]==1){macias[i+bruh]=-1;}
      else{macias[i+bruh]/=2;}
  }
act=0;

  for(int i=0 ; i<macias.size() ; i-=-1)
  {
    if(i%2==bruh&&macias[i]>0)
    {
      if(macias[i+1]>macias[i-1]){macias[i+1]+=macias[i];macias[i]=-1;}
      else{macias[i-1]+=macias[i];macias[i]=-1;}

//cout<<i<<endl;
    }
    if(macias[i]==-1){bst=max(bst,act);act=0;}
      else{act+=macias[i];}
  }
bst=0;act=0;
for(int i=0 ; i<macias.size();i-=-1)
{
  if(macias[i]==-1){bst=max(bst,act);act=0;}
    else{act+=macias[i];}
}


bst=max(bst,act);
  // for(int i=0 ; i<macias.size() ; i-=-1)
  // {
  //   printf("%d ",macias[i]);
  // }
printf("%d",bst);


  return 0;
}
