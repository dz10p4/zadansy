    #include<bits/stdc++.h>
    using namespace std;
    const int N=65536;
    vector<pair<int,int>>points;
    int tree[2*N],pusht[2*N],outp;
    queue<pair<int,int>>q;




    void pushtree(int w)
    {
        int a=pusht[w];
        tree[w*2]+=a;
        tree[w*2+1]+=a;
        pusht[w*2]+=a;
        pusht[w*2+1]+=a;
        pusht[w]=0;
    }


    void add(int w,int p, int k, int x,int y, int val)
    {

        if(p>y||k<x)return;

        if(p>=x&&k<=y)
        {
            tree[w]+=val;
            pusht[w]+=val;
            return;
        }
        pushtree(w);
        add(w*2,p,(p+k)/2,x,y,val);
        add(w*2+1,(p+k)/2+1,k,x,y,val);
        tree[w]=max(tree[w*2],tree[w*2+1]);
    }


    int main()
    {
        int s,w,n,x,y;
        
        scanf("%d%d%d",&s,&w,&n);

        for(int i=0 ; i<n ; ++i)
        {
            scanf("%d%d",&x,&y);

            x+=30000;
            y+=30000;

            points.push_back({x,y});


        }

        sort(points.begin(),points.end());

        for(auto I:points)
        {
            x=I.first;
            y=I.second;
            
            if(!q.empty())
            {
                while(q.front().first<=x)
                {   
                    add(1,0,N-1,q.front().second,q.front().second+w,-1);
                    q.pop();
                    if(q.empty())break;
                }

            }
            q.push({x+s+1,y});
            add(1,0,N-1,y,y+w,1);

            outp=max(outp,tree[1]);
        }

        printf("%d",outp);


        return 0;
    }