#include <bits/stdc++.h>
using namespace std;

const int N=1048576;
bool tree[2*N][4],wynik[4];

void query (int w)
{
    if(tree[w][1])wynik[1]=1;
    if(tree[w][2])wynik[2]=1;
    if(tree[w][3])wynik[3]=1;
	//wynik+=tree[w]; // dodajemy do wyniku to co dodawalismy do jego przedzialu
	if (w==1) return; // jesli to korzen nie wywolujemy sie dalej
	else query(w/2); // rekurencyjnie dla ojca
}

void add (int w, int p, int k, int x, int y, int val)
{
	/*
		w-numer wierzcholka w ktorym jestesmy
		p,k-poczatek i koniec przedzialu za ktory odpowiada dany wierzcholek
		x,y-poczatek i koniec przedzialu na ktorym chcemy wykonac operacje 
	*/
	if (k<x || p>y) return;   //ten wierzcholek nie odpowiada za zadne elementy zapytania
	if (x<=p && y>=k) // wszystkie elementy za ktore odpowiada wierzcholek sa w przedzaiale z zapytania
	{
		tree[w][val]=1; //aktualizujemy wierzcholek
		return; // nie wywolujemy sie dalej
	}
	add(w*2,p,(p+k)/2,x,y,val); // przedzialy tylko sie przecinaja czyli to nie przedzial bazowy
	add(w*2+1,(p+k)/2+1,k,x,y,val);
}


int main()
{
    int n,m,l,r,a,wyn=0;
    scanf("%d%d",&n,&m);

    for(int i=0 ; i<m ; ++i)
    {
        scanf("%d%d%d",&l,&r,&a);
        add(1,N+1,2*N-1,l+N,r+N,a);
        //change(l,r);
    }

    for(int i=0 ; i<=n ; ++i)
    {
        for(int u=0 ; u<=3 ; ++u)wynik[u]=0;
        query(N+i);
        if(wynik[1]==1&&wynik[2]==1&&wynik[3]==0)wyn++;
    }

    printf("%d",wyn);


    return 0;
}