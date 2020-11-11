#include "myMath.h"
int main() {
double x=0,res1,res2,res3;
printf("Please insert a real number:");
scanf("%lf",&x);
res1=sub(add(Exponent((int)x),power(x,3)),2);
res2=add(mul(x,3),mul(power((int)x,2),2));
res3=sub(div(mul(power((int)x,3),4),5),mul(x,2));
printf("The value of f(x)=e^x+x^3-2 at the point %lf is:%.4lf \n",x,res1);
printf("The value of f(x)=3x+2x^2 at the point %lf is:%.4lf \n",x,res2);
printf("The value of f(x)=(4x^3)/5-2x at the point %lf is:%.4lf \n",x,res3);
}