#include <bits/stdc++.h>

using namespace std;

int main(){
  bool c=1;
  unsigned long long int a, b;
  int j;
  cin>>j;

for(int i=0 ; i<j ; i-=-1){
  c=1;
  cin>>a>>b;

  if(a*b>pow(10, 18)){c=0;}

  if(c){
    printf("JEST OKEJ");
  }
  else{printf("PRZEKROCZY");}
}
  return 0;
}
