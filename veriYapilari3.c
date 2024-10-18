#include <stdio.h>

struct bag
{
	int deger;
	struct bag * gosterici;
};

struct bag * bas =NULL;
struct bag * gecici =NULL;

void basaEkle(int sayi) 
{
	struct bag * eklenecek;
	eklenecek = (struct bag * ) malloc (sizeof ( struct bag )) ;
	eklenecek -> deger =sayi;
	eklenecek-> gosterici =bas;
	bas=eklenecek;
}

void yazdir()
{
	gecici= bas;
	while(gecici->gosterici!=NULL)
  {
		printf (" %d ",gecici->deger);
		gecici=gecici->gosterici;
	}
	printf(" %d ", gecici->deger);
}


int main() 
{
   
   int adet=0;
   while (adet !=6)
   {
   	int sayi;
   	printf("bir sayi girin : ");
   	scanf("%d",&sayi);
   	basaEkle(sayi);
   	adet++;
   }
   yazdir();
	return 0;

}
