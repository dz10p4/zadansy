#include <bits/stdc++.h>
using namespace std;

const int N=131072;

double tree[2*N];


void query (int w, int val)
{
	//wynik+=tree[w]; // dodajemy do wyniku to co dodawalismy do jego przedzialu
	if (w==1) return; // jesli to korzen nie wywolujemy sie dalej
	else query(w/2,val); // rekurencyjnie dla ojca
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
		tree[w]+=val; //aktualizujemy wierzcholek
		return; // nie wywolujemy sie dalej
	}
	add(w*2,p,(p+k)/2,x,y,val); // przedzialy tylko sie przecinaja czyli to nie przedzial bazowy
	add(w*2+1,(p+k)/2+1,k,x,y,val); // zuza było źle
}





int main()
{

    int n,k,inp;

    scanf("%d%d",&n,&k);

    for(int i=0 ; i<n ; ++i)
    {
        cin>>tree[N+1+i];//scanf("%f",&tree[N+1+i]);
    }

    for(int i=N ; i>0 ; --i)
    {
        tree[i]=(tree[i*2-1]+tree[i*2])/2;
        //else tree[i]=tree[i*2];
    }

    cout<<tree[(N+1)/2/2/2]<<endl;
    cout<<tree[(N+1)/2/2]<<"    "<<tree[(N+1)/2/2+1]<<endl;
    cout<<" "<<tree[(N+1)/2]<<"   "<<tree[(N+1)/2+1]<<"   "<<tree[(N+1)/2+2]<<"   "<<tree[(N+1)/2+3]<<endl;
    cout<<tree[N+1]<<" "<<tree[N+2]<<" "<<tree[N+3]<<" "<<tree[N+4]<<" "<<tree[N+5]<<" "<<tree[N+6]<<" "<<tree[N+7]<<" "<<tree[N+8];





    return 0;
}