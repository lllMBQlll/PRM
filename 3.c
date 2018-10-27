#include "stdio.h"
#include "string.h"


int main()
{
char tab[69], z;
printf("Podaj imię i nazwisko:");


int i=0, s=0;
while (((z=getchar())!='\n'))
	{
		if (i<69) tab[i++]=z;
		if (z==32) s++;
	}

tab[i]='\0';

printf("Wprowadzono: %s\n", tab);
printf("Spacje: %d\n", s);
printf("Długość im. i nazw.: %ld\n", (strlen(tab)-s));

for (i=0;i<strlen(tab);i++)
	{
		if ((tab[i]>=97) && (tab[i]<=122)) tab[i]-=32;
	}
printf("Big litery: %s\n", tab);	
return 0;
}
