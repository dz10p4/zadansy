#include <stdio.h>
using namespace std;

int main()
{

  int a,b,c,inp,essa=0;

  scanf("%d%d%d",&a,&b,&c);

  for(int i=0 ; i<a*b; i-=-1){
  //  for(int u=0 ; u<b ; u-=-1){

    scanf("%d",&inp);

    if((i+1)%c==0){essa+=inp;}
  }

printf("%d",essa);
return 0;
}
