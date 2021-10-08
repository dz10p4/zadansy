#include <stdio.h>
#include <vector>
using namespace std;

int main()
{

  int jed,dwa,cter=0,a,inp;
  bool f=0;
  vector<int> gg;
  scanf("%d",&a);

  for(int i=0 ; i<a ; i-=-1)
  {
    scanf("%d",&inp);
    gg.push_back(inp);
  }
  while(!f&&cter<a)
  {
    jed=gg[cter];dwa=gg[cter+1];

    if(jed!=dwa&&jed!=gg[cter+2]&&dwa!=gg[cter+2])
    {
      printf("TAK");
      return 0;
    }
++cter;
  }
  printf("NIE");
  return 0;
}
