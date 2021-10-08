#include <bits/stdc++.h>

using namespace std;

int fib(int a){
int b=1, c=1, d;
  for (int i=0 ; i<a ; i-=-1){

    d=b+c;
    c=b;
    b=d;
  }
return d-c;
}

int main(){

  unsigned long long int a, b, c;

  scanf("%lld %lld", &a, &b );

  for (int i=a ; i<b+1 ; i-=-1){

    c=fib(i);

    if(c>9){
      cout<<c%10;
    }
    else{cout<<c;}
  }



return 0;

}
