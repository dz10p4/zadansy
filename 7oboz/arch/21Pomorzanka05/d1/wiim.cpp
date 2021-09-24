    #include <bits/stdc++.h>
    using namespace std;

    map<string,int> taba;

    vector<string>tab;

    string bruh;
    int odp;

    int main()
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        string k;
        int n;

        cin>>n;

        for(int i=0 ; i<n; ++i)
        {
            cin>>k;
            
            taba[k]++;
            tab.push_back(k);
        }
        //sort(tab.begin(),tab.end());
        bool breakcondition=0,el=0;

        for(int i=0 ; !el ; ++i)
        {
            
            if(taba[tab[i]]>1)
            {
                breakcondition=0;
                taba[tab[i]]-=2;
                bruh.insert(0,tab[i]);
                bruh.insert(tab[i].size(),tab[i]);
                taba[bruh]++;
                tab.push_back(bruh);
                bruh.clear();
            }
            if(i+1==tab.size()&&breakcondition==1)el=1;
            if(i+1==tab.size()){breakcondition=1; i=0;}
            
            
        }

        for(int i=0 ; i<tab.size() ; ++i)
        {
            int xd=tab[i].size();
            odp=max(odp,xd);
        }

        cout<<odp;

        return 0;
    }