#include <stdio.h>
#include <vector>
using namespace std;

vector<int> macias;

bool count(int a)
{
  bool k;
int jed=0,dwa=0;
  for(int i=0 ; i<macias.size()-1 ; i-=-1){

    if(macias[i]==1){++jed;}
    if(macias[i]==2){++dwa;}

  }

  macias.clear();

  if((jed==2)||(jed==2&&dwa>0)) k=1;
  else k=0;

jed=0;dwa=0;
return k;
}




void convert(long long liczba, int system)
{
  if (liczba == 0) // jezeli liczba wynosi 0 to konczymy - mamy juz wynik
  return;
  int wynik = liczba%system; // obliczamy kolejna liczbe/litere do wyswietlenia
  liczba /= system; // zmniejszamy liczbe
  convert(liczba, system); // wywolujemy funkcje rekurencyjnie aby wyswietlac 'od konca'
  if (wynik < 10) // jezeli wynik mniejszy od 10 to wyswietlamy go
  macias.push_back(wynik);
  else // jezeli wiekszy to zamieniamy na odpowiedni kod ASCII
  {
    char litera = wynik + 55;
  }
}

int main()
{
int liczba,p;
long long n;

scanf("%d",&p);

for(int i=0 ; i<4 ; i-=-1){

  scanf("%lld",&n);

  convert(n,p);

  printf("%d ",count(1));

}

return 0;
}
