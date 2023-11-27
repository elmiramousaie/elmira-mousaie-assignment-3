#include <stdio.h>
#include <stdlib.h>

int main()
{
    float w , h ;
    printf("give me your weight:");
    scanf("%f",&w);
    printf("give me your hight:");
    scanf("%f",&h);
    printf("weight=%.3f\n",w);
    printf("hight=%.3f\n",h);
    float BMI = w/(pow(h,2));
    printf("BMI=%f\n", BMI);
    if(18.5>BMI){printf("underweight");}
    else if(18.5<=BMI && BMI<25){printf("normal weight");}
    else if(25<=BMI && BMI<30){printf("overweight");}
    else if(30<=BMI && BMI<35){printf("obesity");}
    else if(35<=BMI && BMI<40){printf("extreme obesity");}
    return 0;
}
