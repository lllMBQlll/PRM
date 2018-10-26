#include <stdio.h>

int main()
{
    float S,r;
    int N;
    printf("Enter S\n");
    scanf ("%f", &S);
    printf("Enter N\n");
    scanf ("%d", &N);
    printf("Enter r\n");
    scanf ("%f", &r);

    int n=0;
    float R=r/100;
    float rate=0;
    for(n=N;n>0;n--)
        {
            rate= ((S/N)*(((N-n+1)*(R/12))+1));
            printf("rata%d: %4.2f\n" ,n,rate);
        }
    return 0;
}
