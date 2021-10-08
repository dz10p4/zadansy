#include <bits/stdc++.h>

using namespace std;

//__gcd;

unsigned long long int nww(unsigned long long int a, unsigned long long int b){
	unsigned long long int c;

	c=a*b/__gcd(a, b);


	return c;
	}

int main(){
		unsigned long long int k, inp, out;
		vector <unsigned long long> a;

		cin>>k;

		for(int i=0 ; i<k ; i-=-1){
			cin>>inp;
			a.push_back(inp);
	}
out=nww(a[0], a[1]);
		for(int i=2 ; i<k+1 ; i-=-1){

			out=nww(out, a[i]);


			}


cout<<out;

return 0;
		}
