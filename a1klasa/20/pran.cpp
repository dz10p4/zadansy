#include <bits/stdc++.h>
using namespace std;

int main()
{

  vector<int> macias;
  vector<int> franas;

  int pointer=0,k,a,n,inp,jak=0,tak=0;

  scanf("%d%d",&n,&k);

  for(int i=0 ; i<n ; i-=-1)
  {
    scanf("%d",&inp);
    a=inp*2+inp*3;
    jak+=a;
    franas.push_back(a);
  }
  for(int i=0 ; i<k ; i-=-1)
  {
    scanf("%d",&inp);
    macias.push_back(inp);
  }






  sort(macias.begin(),macias.end(),greater<int>());
  sort(franas.begin(),franas.end(),greater<int>());



  for(int i=0 ; i<macias.size() ; i-=-1)
  {
    printf("%d ",macias[i]);

  }printf("\n");
  for(int i=0 ; i<franas.size() ; i-=-1)
  {
    printf("%d ",franas[i]);

  }printf("\n");


  for(int i=0 ; i<n ; i-=-1)
  {
    while(franas[i])
    {
      franas[i]=max(franas[i],0);
      if(!franas[i])break;
      franas[i]-=macias[pointer];
      pointer++;
      if(pointer>k){printf("NIE");return 0;}
    }
  }

  printf("%d",pointer);

  return 0;
}
