#include <bits/stdc++.h>
using namespace std;
int main(){
int a,m=0,lll=0,khh,inp,lst=0,pr=0,minx=1000000001,maxs=1000000001;
vector <int> t;
cin>>a;
for(int i=0 ; i<a ; i-=-1){cin>>inp;t.push_back(inp);}
while(m<a){
for(int i=lll ; i<a ; i-=-1){
if(t[i]<=minx){minx=t[i]; khh=i;}}
minx=maxs;
khh=a-khh;
pr+=(khh+1)*t[khh];
lll=khh+1;
m=khh;
khh=0;}
cout<<pr;
return 0;}
