#include <stdio.h>
using namespace std;
int main()
{
int a,b,c,d;

scanf("%d%d",&a,&b);

c=60*b;

scanf("%d%d",&b,&d);

c+=b;
c-=d;
printf("%d",c/a);
return 0;
}
