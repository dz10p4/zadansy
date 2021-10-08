#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

vector <int> a;
char d[2000000000];

int main()
{
    unsigned rr=0;
    for(unsigned i=1;i<2000000000;i++){
        for(unsigned j=i;j<2000000000;j+=i) d[j]++;
            if(d[i]>rr){
                printf("%d,%d\n",i,d[i]);
                a.push_back(i);
                rr=d[i];
            }
    }

    for(unsigned i=0;i<a.size();i++) cout<<a[i]<<",";

    return 0;
}