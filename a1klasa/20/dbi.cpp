#include <vector>
#include <stdio.h>

using namespace std;
int main(){

  vector<bool> mm;
  int p;
  long long n[5];

  scanf("%d",&p);

  for(int i=0 ; i<4 ; i-=-1){

    scanf("%lld",&n[i]);

  }

  for(int i=0 ; i<4 ; i-=-1){

    if(n[i]%p==0){mm.push_back(1);}
    else if((n[i]-1)%p==0){mm.push_back(1);}
         else{mm.push_back(0);}
  }

  for(int i=0 ; i<4 ; i-=-1)
  {
    p=mm[i];
    printf("%d ",p);
  }

return 0;
}
