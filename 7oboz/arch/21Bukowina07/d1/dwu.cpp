#include <bits/stdc++.h>
using namespace std;
int ct1[50001],ct2[50001],y[50001],x[50001],cter,posc1[100001],posc2[100001];
queue<int>q1,q2;
bool secc[100001],ficc[100001],ap[50001];
pair<int,int>retp;

void replaceSoldiers(int w)
{   
    if(ct1[x[w]]==w)
    {
        ct1[x[w]]=0;
    }
    ap[x[w]]=1;

    if(ct2[x[w]==w])
    {
        ct2[y[w]]=0;
    }
    ap[y[w]]=1;

    swap(x[w],y[w]);
}



void goDeeper(int pos1,int pos2,int val,int glebokosc,int wi)
{   
    if(!glebokosc%2)
    {
    
        if(!secc[y[pos1]]&&!secc[y[pos2]]){replaceSoldiers(pos1);}
        if(!secc[y[pos1]]&&secc[y[pos2]]){replaceSoldiers(pos1);}
        if(secc[y[pos1]]&&!secc[y[pos2]]){replaceSoldiers(pos2);}
        else
        {
            goDeeper(pos1,posc2[pos1],y[pos1],glebokosc+1,1);
            goDeeper(pos2,posc2[pos2],y[pos2],glebokosc+1,2);
        }
    }
    else
    {
        if(!ficc[x[pos1]]&&!ficc[x[pos2]]){replaceSoldiers(pos1);}
        if(!ficc[x[pos1]]&&ficc[x[pos2]]){replaceSoldiers(pos1);}
        if(ficc[x[pos1]]&&!ficc[x[pos2]]){replaceSoldiers(pos2);}
        else
        {
            goDeeper(pos1,posc1[pos1],x[pos1],glebokosc+1,1);
            goDeeper(pos2,posc1[pos2],x[pos2],glebokosc+1,2);
        }

    }
    
    
}



int main()
{
    int n;

    scanf("%d",&n);

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&x[i+1]);
        if(!ct1[x[i+1]])ct1[x[i+1]]=i+1;
        else {q1.push(i+1);ficc[x[i+1]]=1;posc1[i+1]=ct1[x[i+1]];posc1[ct1[x[i+1]]]=i+1;}
    }

    for(int i=0 ; i<n ; ++i)
    {
        scanf("%d",&y[i+1]);
        if(!ct2[y[i+1]])ct2[y[i+1]]=i+1;
        else {q2.push(i+1);secc[y[i+1]]=1;posc2[i+1]=ct2[y[i+1]];posc2[ct2[y[i+1]]]=i+1;}
    }

    while(!q1.empty())
    {
        int spos=q1.front(),fpos=ct1[x[q1.front()]],num=x[q1.front()],result;
        q1.pop();
        
        goDeeper(fpos,spos,num,0,0);

        
        
        cout<<"macias";

    }


    cout<<"macias";
    return 0;
}