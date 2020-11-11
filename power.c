#include "myMath.h"
double Exponent(int x) {
return power(2.718281828,x);
}
double power(double x,int y) { //x^y
double res=1;
int i;
int flag=0;
if(y<0) {
flag=1;
y=-y;
}
for(i=0;i<y;i++) {
res=res*x;
}
if(flag==1)
res=1/res;
return res;
}
