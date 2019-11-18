
#include "myMath.h"
#define exp 2.718
double pow_(double x,int y)
    {
        double ans=1;
        for(int i=0;i<=y;i++)
        {
            ans=ans*x;
        }
        return ans;
    }
    double Exp(int x)
    {
        double ans=0;
        ans=pow_(exp,x);
        return ans;
    }
