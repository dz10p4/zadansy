#include <bits/stdc++.h>

using namespace std;

int main(){

    string a;
    int b, c;

    cin>>a;

    b=(a[1]-49)*100+(a[2]-49)*10+a[3]-49;
    c=(a[5]-49)*100+(a[6]-49)*10+a[7]-49;

    cout<<b<<" "<<c;
    return 0;


}
