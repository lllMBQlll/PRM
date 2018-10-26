#include <stdio.h>
#include <limits.h>

int main()
{
int input;
int max=0;
int min=INT_MAX;
int n=0;
int sum=0;
float avg;

for(;;)
    {
        printf("Podaj wyraz ciongu[wpisanie zera konczy dzialanie programu]:");
        scanf ("%d", &input);
        if(input>0)
            {
                sum=(sum+input);
                n++;
                if(input>max) max=input;
                if(input<min) min=input;
            }
        if(input==0)
            {
                avg=(float)sum/n;
                printf("max:%d min:%d avg:%f",max, min, avg);
                break;
            }
    }
return 0;
}
