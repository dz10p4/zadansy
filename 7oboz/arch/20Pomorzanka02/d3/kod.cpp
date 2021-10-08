#include <bits/stdc++.h>

using namespace std;

const int N=65536;
const int R=131072;
int tree[R];
int wynik;

void add (int w, int val)
{
	tree[w]+=val;
	if (w==1) return;
	else add(w/2,val);
}
int query (int w, int v){
if(w>N) return w-N;
if(tree[2*w]>=v) return query(2*w,v);
else return query(2*w+1,v-tree[2*w]);
}

int main(){

  int n;

  scanf("%d",&n);
int p[n],k[n];
  for(int i=0 ; i<n ; i-=-1){
  scanf("%d",&p[i]);
  add(N+i+1,1);
  }
  for(int i=n-1;i>=0 ; i--){
    if(i+1-k[i]<=0){printf("NIE\n");return 0;}
    k[i]=query(1,i+1-k[i]);
    add(N+p[i],-1);
  }
for(int i=0 ; i<n ; i-=-1){
  printf("%d",k[i]);
}
return 0;
}
