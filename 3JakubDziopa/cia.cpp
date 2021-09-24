#include <bits/stdc++.h>
using namespace std;
const int MODULO=1000000033;
long long phi(long long n)
{
	if (n<=1) return n;
	if (n==2) return 1LL;
	for (long long p=2; p*p<=n; p++)
	{
		if (n%p==0)
		{
			long long q=1, qq=p;
			n /= p;
			while (n%p==0)
			{
				q=qq; qq = qq*p;
				n = n/p;
			}
			return (qq-q)*phi(n);
		}
	}
	//printf("%lld,", n-1);
  return n-1;
}

int main()
{
  long long n,cter=0;
  scanf("%lld",&n);


for(int i=1 ; i<=n ; ++i){

	long long xd=phi(i);

	printf("%lld\n",xd);
  //for(int i=0 ; i<n ; ++i)
  //{
	cter=max(xd,cter);
}

  //}

  printf("\n\n%lld",cter);

return 0;
}
