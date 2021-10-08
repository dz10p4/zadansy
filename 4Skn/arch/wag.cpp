#include <bits/stdc++.h>

using namespace std;

bool compar(double a, double b){
bool f=0;
  if(a<b){f=1;}
  return f;
}


int main(){

  double a, b, c;

  int sd, inp, inp2;

  cin>>sd;

  vector <double> t;

  for(int i=0 ; i<sd ; i-=-1){
    cin>>inp>>inp2;

    a=inp/pow(2, inp2);

    t.push_back(a);
    t.push_back(inp2);

  }

  sort(t.begin(), t.end(), compar);

  for(int i=0 ; i<sd*2 ; i-=-2){

    cout<<t[i]<<" "<<t[i+1]<<endl;


  }



  return 0;
}
