#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,y,z;
    printf("enter the dimensions of the sides:");
    scanf("%f%f%f",&x,&y,&z);
    if(abs(x-y)<z && z<(x+y)){printf("these dimensions of sides can make a triangle");}
    else {printf("these dimensions of sides cannot make a triangle");}

    return 0;
}
