#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("give me an integer number:");
    scanf("%d",&x);
    if (x%2==0){
    printf("x is an even number");
    }
    else {printf("x is an odd number");
    }
    return 0;
}
