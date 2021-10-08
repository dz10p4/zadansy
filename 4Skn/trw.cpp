#include <bits/stdc++.h>
using namespace std;

int main()
{

    double t,x,y,out1,out2;

    scanf("%lf%lf%lf", &t,&x,&y);

    out1=1-(x*y)/(x*t+y*t-x*y);
    out2=sqrt((fabs(2*(t*x*(t-y))/(t*y-2*x*y+t*x)-t)/2)*(fabs(2*(x*t*(t-y))/(y*t-2*x*y+t*x)-t)/2)+3*t*t/4);
    printf("%.3lf %.3lf",out1,out2);


    return 0;
}