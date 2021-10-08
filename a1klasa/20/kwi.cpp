#include <bits/stdc++.h>

using namespace std;

const int N=131072;
const int R=262144;
int tree[R];
int wynik;
int tab[10001];
int query (int w)
{
	if (w==1) return tree[1];
	else return query(w/2)+tree[w];
}

void add (int w, int p, int k, int x, int y, int val)
{
	if (k<x || p>y) return;
	if (x<=p && y>=k)
	{
		tree[w]+=val;
		return;
	}
	add(w*2,p,(p+k)/2,x,y,val);
	add(w*2+1,(p+k)/2+1,k,x,y,val);
}

int main()
{
	int b,c,n,dziopa1,dziopa2;
	scanf("%d",&n);


	for(int i=0 ; i<n ; i-=-1)
	{
		scanf("%d%d",&b,&c);
		dziopa1=query(b+N-1);
		dziopa2=query(c+N-1);
		add(1,N,R-1,b+N,c+N-2,1);
		wynik+=dziopa1+dziopa2;

		tree[b+N-1]-=dziopa1;
		tree[c+N-1]-=dziopa2;

		printf("%d\n",wynik); 
		wynik=0;
	}
	return 0;
}
