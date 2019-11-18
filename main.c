#include <stdio.h>
#include <stdlib.h>
#include "myMath.h"

int main()
{
    printf("enter a number");
    double x=scanf("%lf",&x);
    double firstf = sub(add((Exp((int)x)),(pow_(x,3))),2);

    double secondf = add((mul(x,3)),(mul(pow_(x,2),2)));

    double thirdf= sub((div_((mul(pow_(x,3),4)),5)),(mul(x,2)));

    printf("The Value Of F(x)=e^x+x^3-2 At The Point %lf is: %.4lf\n",x,firstf);
    printf("The Value Of F(X)=3x+2x^2 at the point %lf is : %.4lf\n",x,secondf);
    printf("The Value Of F(x)= (4x^3)/5 -2x at th point %lf is : %.4lf\n" ,x,thirdf);

   return 0;
}

