#include <bits/stdc++.h>
using namespace std;
int siz;
char stary[101];
bool ruta=1;

void pisada(int a)
{

        while(ruta)
        {







                for(int i=0; i<101; ++i)
                {
                        if(stary[i]!=0||stary[i]!=1) {ruta=0; break;}


                }

                if(ruta==0) ruta=1;
                else
                {
                        ruta=1;

                        int wsk=101;

                        for(int i=wsk; stary[i]==0; --i)
                        {
                                wsk--;
                        }

                        for(int i=wsk; i>0; --i)
                        {
                                printf("%d",stary[i]);
                        }

                        return;

                }





        }



}




int main()
{
        int k,macias;
        k=getchar_unlocked();
        getchar_unlocked();
        k-='0';

        for(int i=0; i<k; ++i)
        {
                scanf("%d",&macias);

                pisada(macias);



        }







        return 0;
}
