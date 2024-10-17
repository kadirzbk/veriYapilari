#include <stdio.h>
#include <stdlib.h>

struct dugum 
{
    int veri;
    struct dugum *gosterici;
};

struct dugum *bas = NULL;
struct dugum *gecici = NULL;

void SonaEkle(int sayi) 
{
    struct dugum *eklenecek;
    eklenecek = (struct dugum *) malloc(sizeof(struct dugum));
    eklenecek->veri = sayi;
    eklenecek->gosterici = NULL;

    if (bas == NULL) 
    {
        bas = eklenecek;
    } 
    else 
    {
        gecici = bas;
        while (gecici->gosterici != NULL) 
        {
            gecici = gecici->gosterici;
        }
        gecici->gosterici = eklenecek;
    }
}

void yazdir() 
{
    gecici = bas;
    while (gecici->gosterici != NULL) 
    {
        printf("%d ", gecici->veri);  
        gecici = gecici->gosterici;
    }
    printf("%d ", gecici->veri);  
}

int main() 
{
    int adet = 0;
    while (adet != 5) 
    {
        int sayi;
        printf("Bir sayi girin: ");
        scanf("%d", &sayi);
        SonaEkle(sayi);
        adet++;
    }
    yazdir();
    return 0;
}
