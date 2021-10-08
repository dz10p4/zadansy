#include <iostream>

using namespace std;

int main(){
  unsigned int n,ukl, lp, p, d,ctr=0;
  bool t;
  scanf("%d",&ukl);
  lp=0;
  p=2;
  while(p<ukl){
    t=1;
    for(d=2 ; d<p ; d-=-1){
      if(p%d==0){t=0; break;}
    }
    if(t){/*printf("%d,",p);*/ lp++;++ctr;}
    p++;
  }
printf("%d\n",ctr+1);
return 0;

}
