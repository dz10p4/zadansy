#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int visited[4000002];

int mapa[4000001],bb=1,n,cd,cg,chc;
//vector<int> graph[1000001]; 
bool chk=1;


void defes(int w)
{
    visited[w]=bb;

    if(w>n)
    {
        if(w%n!=1)
        {

            if(mapa[w-n-1]>mapa[w])
            {
                cd++;
            }
            
            if(mapa[w-n-1]<mapa[w])
            {
                cg++;
            }
            //cout<<"gl\n";

        }



        if(w%n)
        {

            if(mapa[w-n+1]>mapa[w])
            {
                cd++;
            }
            
            if(mapa[w-n+1]<mapa[w])
            {
                cg++;
            }

            //cout<<"gp\n";

        }
        

        if(mapa[w-n]>mapa[w])
        {
            cd++;
        }
        
        if(mapa[w-n]<mapa[w])
        {
            cg++;
        }

        //cout<<"gs\n";

    }

    if(w<n*n-n+1)
    {
        if(w%n!=1)
        {
            if(mapa[w+n-1]>mapa[w])
            {
                cd++;
            }
            
            if(mapa[w+n-1]<mapa[w])
            {
                cg++;
            }

            //cout<<"dl\n";

        }

        if(w%n)
        {
            if(mapa[w+n+1]>mapa[w])
            {
                cd++;
            }
            
            if(mapa[w+n+1]<mapa[w])
            {
                cg++;
            }

            //cout<<"dp\n";

        }
        if(mapa[w+n]>mapa[w])
        {
            cd++;
        }
            
        if(mapa[w+n]<mapa[w])
        {
            cg++;
        }
        //cout<<"ds\n";
    }

    if(w%n!=1)
    {
        if(mapa[w-1]>mapa[w])
        {
            cd++;
        }
            
        if(mapa[w-1]<mapa[w])
        {
            cg++;
        }
        //cout<<"l\n";
    }

    if(w%n)
    {
        if(mapa[w+1]>mapa[w])
        {
            cd++;
        }
            
        if(mapa[w+1]<mapa[w])
        {
            cg++;
        }
        //cout<<"p\n";
    }

    // for(int i=0 ; i<graph[w].size() ; ++i)
    // {
    
    //     if(mapa[graph[w][i]]>mapa[w])
    //     {
    //         cd++;
    //     }
        
    //     if(mapa[graph[w][i]]<mapa[w])
    //     {
    //         cg++;
    //     }

    // }





    if(w>n)
    {
        if(w%n!=1)
        {

            if(mapa[w-n-1]==mapa[w]&&!visited[w-n-1])defes(w-n-1);

        }

        if(w%n)
        {

            if(mapa[w-n+1]==mapa[w]&&!visited[w-n+1])defes(w-n+1);
            
        }
        
        if(mapa[w-n]==mapa[w]&&!visited[w-n])defes(w-n);
        
        
       

    }

    if(w<n*n-n+1)
    {
        if(w%n!=1)
        {
            if(mapa[w+n-1]==mapa[w]&&!visited[w+n-1])defes(w+n-1);
            
            
           

        }

        if(w%n)
        {
            if(mapa[w+n+1]==mapa[w]&&!visited[w+n+1])defes(w+n+1);
            
            
            

        }


        if(mapa[w+n]==mapa[w]&&!visited[w+n])defes(w+n);
        
            
        
    }

    if(w%n!=1)
    {
        if(mapa[w-1]==mapa[w]&&!visited[w-1])defes(w-1);
        
            
        
    }

    if(w%n)
    {
        if(mapa[w+1]==mapa[w]&&!visited[w+1])defes(w+1);
        
            
        
    }




     //cout<<"macias";


    // for(int i=0 ; i<graph[w].size() ; ++i)
    // {
    
    //     if(mapa[graph[w][i]]==mapa[w]&&!visited[graph[w][i]])defes(graph[w][i]);
    // }

}



int main()
{
    int g=0,d=0;

    scanf("%d",&n);

    for(int i=1 ; i<=n ; ++i)
    {
        for(int u=1 ; u<=n ; ++u)
        {
            scanf("%d",&mapa[(i-1)*n+u]);
            
            // if(i>1)
            // {
            //     graph[(i-1)*n+u].pb((i-2)*n+u);

            //     if(u>1)graph[(i-1)*n+u].pb((i-2)*n+u-1);
            //     if(u<n)graph[(i-1)*n+u].pb((i-2)*n+u+1);
            // }

            // if(i<n)
            // {
            //     graph[(i-1)*n+u].pb((i)*n+u);

            //     if(u>1)graph[(i-1)*n+u].pb((i)*n+u-1);
            //     if(u<n)graph[(i-1)*n+u].pb((i)*n+u+1);
            // }

            // if(u>1)graph[(i-1)*n+u].pb((i-1)*n+u-1);
            // if(u<n)graph[(i-1)*n+u].pb((i-1)*n+u+1);

        }
    }

    for(int i=1 ; i<=n*n ; ++i)
    {
        cd=0;cg=0;
        if(!visited[i]){defes(i);bb++;}
        else continue;
        if(!cd&&cg)
        {
            g++;
        }

        if(cd&&!cg)
        {
            d++;
        }
    }
    if(g==0&&d==0){g=1;d=1;}
    printf("%d %d",g,d);



    return 0;
}