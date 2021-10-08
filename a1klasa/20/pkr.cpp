#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dzban[14];

int main(){
int inp,maxi,maxa=0;
vector<int> macias;

  for(int i=0 ; i<4 ; i-=-1)
  {
    for(int u=0 ; u<5 ; u-=-1)
    {
      scanf("%d",&inp);
      ++dzban[inp-1];
    }


    //cout<<"bifor "<<dzban[14]<<" "<<dzban[13]<<" "<<dzban[12]<<" "<<dzban[11]<<" "<<dzban[10]<<endl;


    sort(dzban,dzban+14);

//cout<<"after "<<dzban[14]<<" "<<dzban[13]<<" "<<dzban[12]<<" "<<dzban[11]<<" "<<dzban[10]<<endl;

    if(dzban[13]>3){macias.push_back(6);}
     if(dzban[13]==3&&dzban[12]==2){macias.push_back(5);}
       if(dzban[13]==3&&dzban[12]<2){macias.push_back(4);}
         if(dzban[13]==2&&dzban[12]==2){macias.push_back(3);}
          if(dzban[13]==2&&dzban[12]<2){macias.push_back(2);}
            if(dzban[13]==1){macias.push_back(1);}
            //dzban[14]={};
            for(int u=0 ; u<14 ; u-=-1){
              dzban[u]=0;
            }
}
for(int i=0 ; i<4 ; i-=-1){
  if(macias[i]>maxa){maxa=macias[i];maxi=i+1;}
}
printf("%d %d",maxi,maxa);
return 0;
}
