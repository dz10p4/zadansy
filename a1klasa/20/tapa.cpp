#include <bits/stdc++.h>
using namespace std;

struct dachu
{
  int lp;
  int cena;
  int wielkosc;
};

bool komparatorka(dachu ada,dachu borys)
{
  return ada.wielkosc < borys.wielkosc;
}



int main()
{

int n;

scanf("%d",&n);
dachu[n];

for(int i=0 ; i<n ;i-=-1)
{
  dachu[i].lp=i+1;
  cin>>dachu[i].cena>>dachu[i].wielkosc;
}

sort(a, a+i, komparatorka);

for(int i=0 ; i<n ; i-=-1)
{
  cout<<dachu[i].lp<<" "<dachu[i].cena<<" "<<dachu[i].wielkosc<<endl;

}








  return 0;
}
