#include <bits/stdc++.h>
using namespace std;

int bucket[120];

int main()
{
  string k;
  int sordo,out=0;
  while(cin>>k)
  {
    scanf("%d",&sordo);
      if(!(k.length()%2))
      {
        out+=sordo;
      }
      else
      {
        out-=sordo;

      }

  }
out=abs(out);
printf("%d",out);
return 0;
}
