#include <stdio.h>

using namespace std;

int main(){

  int a,b,c=1;

  scanf("%d%d",&a,&b);

  for(int i=1 ; i*b<a ; i-=-1){
    c++;
  }

  printf("%d",c*b);

return 0;
}
