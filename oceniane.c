#include "stdio.h"
#define W 4
#define Z 10

int main()
{
char tab[W][Z]={{0}};
char z;
int i,j; 		 //wiersze i kolumny tabeli
int d,m; 		 //l. duzych i maych liter do not. indeksowej
int D,M; 		 //l. duzych i maych liter do not. wskaznikowej
for(i=0;i<W;i++) //wproadzenie znakow do tabeli
{
	printf("Wprowadz ciag znakow do %d. wiersza\n", i+1);
	j=0;
	while ((z=getchar())!='\n')
		if(j<Z-1)
		{
			tab[i][j]=z;
			j++;
		}
	tab[i][j]='\0';
}

//notacja indeksowa
for(i=0,d=0,m=0;i<W;i++) //Wyswietlenie tabeli + liczenie duzych i malych liter
{
	printf("Wiersz %d: %s\n", i+1, tab[i]);
	for(j=0;j<Z;j++)
	{
		if(i%2 ==0)
		{
			if ((tab[i][j]>=97) && (tab[i][j]<=122)) m++;
		}
		else
		{
			if ((tab[i][j]>=65) && (tab[i][j]<=90))  d++;
		}			
	}
}
printf("Liczba duzych liter w wierszach o indeksie nieparzystym: %d\n", d);
printf("Liczba malych liter w wierszach o indeksie parzystym: %d\n", m);

//notacja wskaznikowa
char *p;
for (M=0,D=0,i=0,p=&tab[0][0];i<W;i++)
{
	for(;p<=&tab[i][Z-1];p++)
	{
		if(i%2 ==0)
		{
			if ((*p>=97) && (*p<=122)) M++;
		}
		else
		{
			if ((*p>=65) && (*p<=90))  D++;
		}
	}
}
printf("Liczba duzych liter w wierszach o indeksie nieparzystym: %d\n", D);
printf("Liczba malych liter w wierszach o indeksie parzystym: %d\n", M);
return 0;
}
