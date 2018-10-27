#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main()
{
	srand(time(NULL));
	float tab[10][10]={{0.0}};
	int i, j;
	float sum_index=0, sum_pointer=0;
	for(i=1;i<10;i+=2)
		{
			printf("Wiersz o indeksie %d\n",i);
			for(j=1;j<=10;j++)
				{
					tab[i][j]=(float)(rand()%10)/10;
					printf("%1.1f\t", tab[i][j]);
					sum_index+= tab[i][j];
				}
			printf("\n\n");
		}
	printf("---------------------------------\n\n");
	float (*p)[10]=tab;
	for(i=1;i<10; i+=2)
		{
			printf("Wiersz o indeksie %d\n",i);
			for(j=1;j<=10; j++)
				{
					printf("%1.1f\t", *(*(p+i)+j));
					sum_pointer+= *(*(p+i)+j);
				}
			printf("\n\n");
		}
	printf("Suma= %1.1f\n", sum_index);
	printf("Suma= %1.1f\n", sum_pointer);
	return 0;	
}
