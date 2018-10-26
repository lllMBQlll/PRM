#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main()
{
	srand(time(NULL));
	int tab[10][10]={0};
	int a,b;
	for (a=0;a<10;a++) for (b=0;b<10;b++)
		{
			tab[a][b]= rand()%9;
		}
	
	int i, j, sum_even=0, sum_odd=0;
	for (i=0;i<10;i++)
		{
			for (j=0;j<10;j++)
				{
					printf("%d\t",tab[i][j]);
					if (tab[i][j]%2 == 0) sum_even+= tab[i][j];
					else sum_odd+= tab[i][j];
				}
			printf("\n");
		}
	printf("\n");
	printf("Sum of even numbers= %d\n", sum_even);
	printf("Sum of odd numbers=  %d\n",sum_odd);
	return 0;
}

