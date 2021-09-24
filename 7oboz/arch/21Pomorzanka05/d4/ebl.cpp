#include <bits/stdc++.h>
using namespace std;

int line[1000001],outp;

bool arytm(int a,int b,int c)
{
    return a+c==b*2;  
}


int main()
{
    int n,brazyna=0;
    scanf("%d",&n);

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&line[i]);
    }

    for(int i=2 ; i<n ; ++brazyna)
    {
        if(arytm(line[i-2],line[i-1],line[i]))
        {   
            outp+=2;
            i+=2;
            if(i>=n){i--;}
        }
        else if (line[i-2]<line[i-1]&&line[i-1]<line[i])
        {
            outp++;
            i++;
        }
        else if (line[i-2]>line[i-1]&&line[i-1]<line[i])
        {
            outp++;
            i+=2;
            if(i>=n){i--;}
        }
        else if (line[i-2]<line[i-1]&&line[i-1]>line[i])
        {
            outp++;
            i++;
        }
        else if (line[i-2]>line[i-1]&&line[i]<line[i-2])    
        {
            int spamt=line[i-2];
            while(spamt>line[i-1])++i;
        }
        
                
    brazyna=0;
    }
    printf("%d",outp+1);


    return 0;
}