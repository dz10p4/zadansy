#include <stdio.h>
using namespace std;

int bucket1[10001],bucket2[10001];

int main()
{
  int n,k,l,p,inp;
  scanf("%d%d%d%d",&n,&k,&l,&p);

  for(int i=0 ; i<l ; ++i)
  {
    scanf("%d",&inp);
    ++bucket1[inp];
  }
  for(int i=0 ; i<p ; ++i)
  {
    scanf("%d",&inp);
    ++bucket2[inp];
  }








  return 0;
}
