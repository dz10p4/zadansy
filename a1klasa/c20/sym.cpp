#include <bits/stdc++.h>
using namespace std;

int tab[100000],boomer=0;


int couunt(int a){

  if(tab[a]==a) return 0;
  else
  {

    swap(tab[a],tab[tab[a]]);
    return 1+couunt(tab[a]);
  }
}




int main()
{

  int n,out=0;
  scanf("%d",&n);
  for(int i=0 ; i<n ; i-=-1)
  {
    scanf("%d",&tab[i]);
    tab[i]--;
  }

  for(int i=0 ; i<n ; i-=-1)
  {

    out+=couunt(tab[i]);
    boomer++;
  }

printf("%d",out);
  return 0;
}
