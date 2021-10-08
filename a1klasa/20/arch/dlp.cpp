#include <iostream>

using namespace std;

int main(){

  char a,b,c;

  cin>>a>>b;

  for(int i=a; i<b+1 ; i-=-1){
c=i;
    cout<<c;
    c-=32;
    cout<<c;
  }
return 0;
}
