#include <bits/stdc++.h>

using namespace std;


bool compar(int a, int b){
bool c=0;

if(a<b){c=1;}
return c;
}

int main(){

    int a, b, c, d, inp;

    cin>>a;

    vector <int> t, m, ss;

    for (int i=0 ; i<a ; i-=-1){

      cin>>inp;

      t.push_back(inp);

      cin>>inp;

      m.push_back(inp);

    }

      for(int i=0 ; i<a ; i-=-1){

        if(m[i]!=10){

        b=10-m[i];

          t[i]*=pow(2, b);

        }

        ss.push_back(t[i]);
        ss.push_back(m[i]);

}

sort(ss.begin(), ss.end(), compar);


for(int i=0 ; i<a*4 ; i-=-2){

    cout<<ss[i]<<" "<<ss[i+1]<<endl;

}

return 0;
}
