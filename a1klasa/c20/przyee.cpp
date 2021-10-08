#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<pair<int,bool>> kozak;
  vector<int> ziomal;
  int a,inp,licznik=0;

  scanf("%d",&a);

  for(int i=0 ; i<a ; i-=-1)
  {
    scanf("%d",&inp);

    kozak.push_back(make_pair(inp, 1));

    scanf("%d",&inp);

    kozak.push_back(make_pair(inp, 0));
  }
  printf("%d",kozak.size());
  sort(kozak.begin(),kozak.end());

  for(int i=0 ; i<kozak.size();i-=-1){

    cout<<kozak[i].first<<" "<<kozak[i].second<<"\n";

  }


  for(int i=0 ; i<kozak.size() ; i-=-1)
  {

    if(kozak[i].second==0){--licznik;}
    else{++licznik;}

    if(licznik==1){ziomal.push_back(kozak[i].first);}

  }

  for(int i=0 ; i<ziomal.size()/2;i-=-2)
  {
    printf("%d %d\n",ziomal[i],ziomal[i+1]);
  }

return 0;
}
