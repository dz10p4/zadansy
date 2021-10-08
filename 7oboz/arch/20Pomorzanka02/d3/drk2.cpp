#include <stdio.h>
using namespace std;
int main(){

  long long n,x,y,cter=0;
  int k,q;

  scanf("%lld%d%d",&n,&k,&q);

  for(int i=0 ; i<q ; i-=-1){
      scanf("%lld%lld",&x,&y);
while(x!=y){
      if(x>y)x=(x+k-2)/k;
      else y=(y+k-2)/k;
      ++cter;
}
printf("%d\n",cter);cter=0;
  }
return 0;
}
