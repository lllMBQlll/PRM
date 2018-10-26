#include <stdio.h>

int main()
{
float i=0; //podstawa
float t=0; //podatek
printf("Enter your income(in PLN):");
scanf ("%f", &i);


    if (i<=6600)
    {
        t= 0.18*i-1188;
        if (t<0) t=0;
    }

    if ((i>6600) && (i<=11000))
        t= (0.18*i-((i-6600)/4400)*631.98);

    if ((i>11000) && (i<85528))
        t= (0.18*i-556.02);

    if (i>=85528)
        t= (15395.04+(0.32*(i-85528)));

printf("Tax: %4.2f PLN\n", t);

return 0;
}
