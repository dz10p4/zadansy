#include <stdio.h>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main(){

  int a,b,c,pawel=0,inp;
  vector<int> t;
  scanf("%d%d%d",&a,&b,&c);

  for(int i=0 ; i<a ; ++i)
  {
    scanf("%d",&inp);
    t.push_back(inp);
  }

  sort(t.begin(),t.end(),greater<int>());

  b*=c;
  c=0;
  while(b>0)
  {
    b-=t[c];
    ++pawel;++c;

  }
printf("%d",pawel);
return 0;
}
