//jakub dziopa to zaklepal tak jakby cos
#include <bits/stdc++.h>
using namespace std;

int main()
{

        string k;

        while(cin>>k)
        {

                for(int i=0; i<k.length(); ++i)
                {

                        // if(k[i]=='ą'||k[i]=='Ą') {putchar_unlocked('a'); continue;}
                        // if(k[i]=='ć'||k[i]=='Ć') {putchar_unlocked('c'); continue;}
                        // if(k[i]=='ę'||k[i]=='Ę') {putchar_unlocked('e'); continue;}
                        // if(k[i]=='ł'||k[i]=='Ł') {putchar_unlocked('l'); continue;}
                        // if(k[i]=='ń'||k[i]=='Ń') {putchar_unlocked('n'); continue;}
                        // if(k[i]=='ó'||k[i]=='Ó') {putchar_unlocked('o'); continue;}
                        // if(k[i]=='ś'||k[i]=='Ś') {putchar_unlocked('s'); continue;}
                        // if(k[i]=='ż'||k[i]=='Ż') {putchar_unlocked('z'); continue;}
                        // if(k[i]=='ź'||k[i]=='Ź') {putchar_unlocked('z'); continue;}


                        if(k[i]>='A'&&k[i]<='Z') {putchar_unlocked(k[i]+32); continue;}

                        putchar_unlocked(k[i]);


                }
                printf("\n");

        }




}
