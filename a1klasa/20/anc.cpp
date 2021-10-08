#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
vector<int> macias;
int a,b;

scanf("%d",&a);

if(a<4){printf("%d",a);return 0;}


while(a>=1){

  macias.push_back(a%4);

  a/=4;

//printf("%d",a%4);

}
  for(int i=macias.size()-1; i>=0 ; --i){
    printf("%d",macias[i]);
  }
return 0;
}
