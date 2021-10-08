#include <bits/stdc++.h>
using namespace std;

string k;

void stringMinuser(int a)
{

  if(k[a]-'0'>0){--k[a];}
  else{k[a]='9';stringMinuser(a-1);}

return;
}



int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n,lenk;

  cin>>n>>k;
  lenk=k.length()-1;

  /*for(int i=0 ; i<lenk ; i-=-1)
  {

  }*/

  for(int i=lenk ; i>lenk-n ; i--)
  {
    if(k[i]<'5'){k[i]+=5;stringMinuser(i-1);}
    else k[i]-=5;

  }


  for(int i=0 ; i<lenk+1-n ; i-=-1)
  {
    cout<<k[i];
  }
  cout<<"\n";

  for(int i=lenk-n+1 ; i<=lenk ; i-=-1){
    cout<<k[i]<<"\n";
  }



  return 0;
}
