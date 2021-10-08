#include <bits/stdc++.h>

using namespace std;

int main(){
    bool q=0, w=0, e=0, r=0, t=0, y=0, u=0, i=0, o=0, p=0;
    int a, b, d=0, v[10];
    string c;
    cin>>a>>c;

    for ( int j=0 ; j<30 ; j++ ){

      if (c[j]==0){
        q=1;

      }
      if (c[j]==1){
        w=1;

      }
      if (c[j]==2){
        e=1;

      }
      if (c[j]==3){
        r=1;

      }
      if (c[j]==4){
        t=1;

      }
      if (c[j]==5){
        y=1;

      }
      if (c[j]==6){
        u=1;

      }
      if (c[j]==7){
        i=1;

      }
      if (c[j]==8){
        o=1;

      }
      if (c[j]==9){
        p=1;

      }



d++;
    }

    if(q==0){
      v[1]=0;
    }
    if(w==0){
      v[2]=1;

    }
    if(e==0){
      v[3]=2;
    }
    if(r==0){
      v[4]=3;
    }
    if(t==0){
      v[5]=4;
    }
    if(y==0){
      v[6]=5;
    }
    if(u==0){
      v[7]=6;
    }
    if(i==0){
      v[8]=7;
    }
    if(o==0){
      v[9]=8;
    }
    if(p==0){
      v[10]=9;
    }
    sort(v, v+10);

    for(int i=0 ; i<a ; i++){

      cout<<v[i];

    }

    return 0;
}
