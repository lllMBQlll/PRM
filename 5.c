#include "stdio.h"
#include "math.h"
int main()
{
float a=0, b=0,c=0;
float d=0;
float x0=0 ,x1=0 ,x2=0;

printf("Podaj wspolczynniki rownania ax^2+bx+c\n");
scanf ("%f %f %f",&a,&b,&c);
//printf("%f %f %f\n", a, b, c);
d= ((b*b)-(4*(a*c)));
printf("Delta=\t%f\n", d);

if (d<0)
{
	printf("Delta < 0, brak rozwiazań\n");
}
if (d>0)
{
	x1= ((-b) - sqrt(d))/2/a;
    x2= ((-b) + sqrt(d))/2/a;
    if(x1<x2)
	{	
		printf("x1=\t%f\n",x1);
        printf("x2=\t%f\n",x2);	
	}
	else
	{
		printf("x1=\t%f\n",x2);
        printf("x2=\t%f\n",x1);	
	}
}
if (d==0)
{
    x0= (-(b/(2*a)));
	printf("x0=\t%f\n",x0);
}

return 0; 
}
