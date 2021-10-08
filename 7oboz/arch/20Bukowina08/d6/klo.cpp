#include <bits/stdc++.h>
using namespace std;

int main()
{

        long long int n,cter=0;
        int k=1; \
        scanf("%lld",&n);

        n--; ++cter;

        while(1)
        {
                if(n==1||n==3) {cter++; break;}
                if(n-(3*k)>=1) {n-=3*k; k*=3;}
                else if(n-k>=1) {n-=k;}
                else if(k>1&&n-(k/3)>=1) {n-=k/3; k/=3;}
                else n--;
                cter++;
                //  cout<<n<<" ";

        }
        //  printf("\n");
        printf("%lld",cter);

        return 0;
}
