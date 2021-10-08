#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;


int search(vector <int> t){
int w, j;
w=t[0];
  for(int i=0 ; i<t.size()-1 ; i++ ){
    if(t[i]<w&&t[i]!=-1){w=t[i]; j=i;}
  }
return j;
}


int main(){

  vector <int> peeps;

  int a, b, c, d, w=0;


  cin>>a;

  for(int i=0 ; i<a ; i++){

    cin>>b;

    peeps.push_back(b);

  }
c=a;

 while(c>1){

    d=search(peeps);

    w=w+(peeps[d]*d+1);
  peeps[d]=-1;
  c=c-d+1;
cout<<c<<endl;
sleep(1);
  }


cout<<w;

return 0;
}
