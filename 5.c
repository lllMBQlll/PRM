#include <stdio.h>
#include <math.h>

int main()
{
float a,b,c;
float delta;
float x0,x1,x2;

printf("Podaj wspolczynniki rownania ax^2+bx+c\n");
scanf ("%f %f %f",&a,&b,&c);
printf("%f %f %f\n", a, b, c);
delta= ((b*b)-(4*(a*c)));
printf("%f\n", delta);

if (delta<0)
    {
        printf("Delta < 0, brak rozwiazań");
    }
if (delta>0)
    {
        x1= (-b - sqrt(delta))/2;
        printf("x1=%f\n",x1);
        x2= (-b + sqrt(delta))/2;
        printf("x2=%f\n",x2);
    }
if (delta=0)
    {
        x0= -(b/(2*a);
        printf("x0=%f\n",x0);
    }
return 0;
}
