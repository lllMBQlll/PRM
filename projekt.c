#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"
#include "limits.h"

int main()
{
	srand(time(NULL));
	int i;
	int N=0,N1=1;
	float x,y;
	double pi;
	for(i=0,x=0,y=0;i<=1111111111;i++)
	{
		x=((float)rand()/RAND_MAX);
		y=((float)rand()/RAND_MAX);
		if(pow(x-0.5,2)+pow(y-0.5,2)<=0.25) N1++;
		N++;
		if(i%10000==00)	printf("N=%d \t N/N1=%f\n", N, (float)N1/(float)N);
		
	}
	pi=((4*(float)N1)/(float)N);
	printf("pi= %3.10f\n", pi);
	return 0;	
}
