#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,delta,x1,x2;
    printf("enter coefficients:");
    scanf("%f %f %f",&a,&b,&c);
    printf("a=%.1f b=%.1f c=%.1f\n",a,b,c);
    delta=pow(b,2)-(4*a*c);
    if (delta>=0){
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("roots are:%.3f,%.3f",x1,x2);}
    else {printf("no roots");}
    return 0;
}
