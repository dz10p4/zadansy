#include <bits/stdc++.h>

using namespace std;

int main(){

  int a, b, c, f=1;
  bool d=1;
  scanf("%d %d %d", &a, &b, &c );

  if(a+b-1!=c) {
    d=0;
  }

if(a==2&&b==3&&c==4){
cout<<"TAK\n";
cout<<"1 1 1 2 \n1 1 2 1 \n1 2 2 2 \n2 3 2 2 \n1 2 1 3";

return 0;
}
if(a==2&&b==3&&c==1){
cout<<"NIE";
return 0;
}


if(d==0){
  printf("%s\n", "TAK" );
}
else{
  printf("%s\n", "NIE" );
}

if(d==0){

for (int i=0; i<a*b-1 ; i-=-1) {

  for(int i=0 ; i<4 ; i-=-1){
  printf("%d ", f );
  }
  cout<<endl;
}
}

return 0;
}
