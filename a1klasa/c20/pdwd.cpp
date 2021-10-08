#include <stdio.h>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

int rozn(int a, int b){
int c;
  c=max(a,b)-min(a,b);
return c;
}

int vvii(int n, int a){

  if(a>n){return 1;}
  else{return a;}

}

int main(){

  int pawel,mminx,mmaxx,inpx,inpy,n,maxx=0,maxy=0,minx,miny,gsciezka;
  vector<pair<int,int>> ruta;
  double out,ptr1=0;
  bool rr=0;
  scanf("%d",&n);

  for(int i=0 ; i<n ; i-=-1)
  {

    scanf("%d%d",&inpx,&inpy);
    ruta.push_back(make_pair(inpx,inpy));

    if(inpx>maxx){maxx=inpx;mmaxx=i;}
    if(inpx<minx){minx=inpx;mminx=i;}
    if(inpy>maxy){maxy=inpy;}
    if(inpy<miny){miny=inpy;}

  }
cout<<"mmaxx "<<mmaxx<<" mminx "<<mminx<<endl;
gsciezka=abs(mmaxx-mminx);//rozn(mmaxx,mminx);
cout<<"gsciezka="<<gsciezka<<endl;
  for(int i=0 ; i<gsciezka&&i<20 ; i-=-1)
  {
    ptr1+=((ruta[mminx+i].second+ruta[mminx+i+1].second)/2)+abs(ruta[mminx+i].first-ruta[mminx+i+1].first);
    cout<<ptr1<<endl;
  }











printf("%.2f",out);
return 0;
}
