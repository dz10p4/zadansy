#include <stdio.h>
using namespace std;

int euk(int a,int b)
{
  while (a>0 && b>0)
  	{
  		if (a>b) a%=b;
  		else b%=a;
  	}
  	return a+b;
}


int main()
{

  int a,b;

  scanf("%d",&a);

  b=euk(a,1000);

  printf("%d/%d",a/b,1000/b);

  return 0;
}
