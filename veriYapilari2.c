#include <stdio.h>
#include <stdlib.h>

struct bag 
{
    int deger;
    struct bag *gosterici;
};

struct bag *bas = NULL;
struct bag *gecici = NULL;

void SonaEkle(int sayi) 
{
    struct bag *bekleyen;
    bekleyen = (struct bag *) malloc(sizeof(struct bag));
    bekleyen->deger = sayi;
    bekleyen->gosterici = NULL;

    if (bas == NULL) 
    {
        bas = bekleyen;
    } 
    else 
    {
        gecici = bas;
        while (gecici->gosterici != NULL) 
        {
            gecici = gecici->gosterici;
        }
        gecici->gosterici = bekleyen;
    }
}

void yazdir() 
{
    gecici = bas;
    while (gecici->gosterici != NULL) 
    {
        printf("%d ", gecici->deger);  
        gecici = gecici->gosterici;
    }
    printf("%d ", gecici->deger);  
}

int main() 
{
    int miktar = 0;
    while (miktar != 5) 
    {
        int sayi;
        printf("Bir sayi girin: ");
        scanf("%d", &sayi);
        SonaEkle(sayi);
        miktar++;
    }
    yazdir();
    return 0;
}
