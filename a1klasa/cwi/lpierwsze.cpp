#include <iostream>

using namespace std;

int main(){
  unsigned int n, lp, p, d;
  bool t;
  scanf("%d",&n);
  lp=0;
  p=2;
  while(lp<n){
    t=1;
    for(d=2 ; d<p ; d-=-1){
      if(p%d==0){t=0; break;}
    }
    if(t){printf("%d,",p); lp++;}
    p++;
  }
printf("\n");
return 0;

}
