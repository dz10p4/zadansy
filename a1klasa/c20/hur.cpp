  #include <bits/stdc++.h>

  using namespace std;

  int main (){

  	int a, u, f;
  	int c[27]={};
  	char b, o=65;
  	string d;
  	bool v;
  	cin>>a;

  	for( int i=0 ; i<a ; i++ ){
  	cin>>b>>f;

  	c[b-65]+=f;
  }
  	for (int i=0 ; i<26 ; i++){
  		if(c[i]!=0){
  			cout<<o<<" "<<c[i];
  		}
  		if(c[i]!=0){cout<<endl;
  		}
  		o++;
  	}

  }
