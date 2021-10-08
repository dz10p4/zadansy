#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,inp=0,n=0,p=0;
    cin>>a;
    for(int i=0 ; i<a ; i-=-1){
        cin>>inp;
        if(inp%2==1){n++;}
        else{p++;}
    }
    a=(pow(2,p)*pow(2,max(n-1, 0)))-1;
    cout<<a;
return 0;
}
