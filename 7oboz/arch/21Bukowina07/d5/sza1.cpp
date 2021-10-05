#include <bits/stdc++.h>
using namespace std;

vector<char> dp[101][101];
long long grid[101][101],n,ggg=0,sp,fthp=1;
queue<pair<long long,long long>>q;
pair<long long,long long>pp;

void sum(int x1,int y1,int x2,int y2)
{
    if(!dp[x2][y2].size()){dp[x2][y2]=dp[x1][y1];return;}
    for(int i=0 ; i<dp[x1][y1].size() ; ++i)
    {   
        if(i<dp[x2][y2].size()&&dp[x1][y1][i]+dp[x2][y2][i]<=9){dp[x2][y2][i]+=dp[x1][y1][i]+ggg;ggg=0;}
        else 
        {
            if(i>=dp[x2][y2].size()){dp[x2][y2].push_back(ggg+dp[x1][y1][i]);ggg=1;continue;}
            dp[x2][y2][i]+=dp[x1][y1][i]+ggg-10;
            ggg=1;
        }
    }
}



void recc(int x,int y)
{
    if(x+grid[x][y]<=n-1)
    {
        //dp[x+grid[x][y]][y]+=dp[x][y];
        sum(x,y,x+grid[x][y],y);
        if(x!=n-1&&y!=n-1)q.push({x+grid[x][y],y});//recc(x+grid[x][y],y);
    }
    if(y+grid[x][y]<=n-1)
    {
        //dp[x][y+grid[x][y]]+=dp[x][y];
        sum(x,y,x,y+grid[x][y]);
        if(x!=n-1&&y!=n-1)q.push({x,y+grid[x][y]});//recc(x,y+grid[x][y]);
    }

    pp=q.front();
    q.pop();
    recc(pp.first,pp.second);
    pp=q.front();
    q.pop();
    recc(pp.first,pp.second);



}

int main()
{
    scanf("%lld",&n);
    
    for(int i=0 ; i<n ; ++i)
    {
        for(int u=0 ; u<n ; ++u)
        {
            scanf("%lld",&grid[i][u]);
        }
    }
    dp[0][0].push_back(1);
    recc(0,0);
    //for(int i=100 ; dp[n-1][n-1][i]==0 ; --i)sp=i;
    for(int i=0 ; i<n ; ++i)
    {
        for(int u=0 ; u<n ; ++u)
        {
            for(auto I:dp[i][u])printf("%d ",I);
        }
        printf("\n");
    }

    for(int i=0 ; i<dp[n-1][n-1].size() ; ++i)printf("%d",dp[n-1][n-1][i]);

    return 0;
}

4 
2 3 3 1 
1 2 1 3 
1 2 3 1 
3 1 1 0 