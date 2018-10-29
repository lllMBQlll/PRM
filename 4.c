#include "stdio.h"

int main()
{
int d=0, m=0, y=0; //day, month, year

char *tab[]=
{
	"Styczen",
	"Luty",
	"Marzec",
	"Kwiecien",
	"Maj",
	"Czerwiec",
	"Lipiec",
	"Sierpien",
	"Wrzesien",
	"Pazdziernik",
	"Listopad",
	"Grudzien"
};
printf("Podaj date w formacie dd-mm-rrrr\n");
scanf ("%d-%d-%d", &d, &m, &y);
printf("%d %s %d\n", d, *(tab+m-1),y);
return 0;
}
