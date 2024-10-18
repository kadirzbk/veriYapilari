#include <stdio.h>
#include <stdlib.h>

struct bag 
{
    int data;
    struct bag *next;
};

struct bag *start = NULL;
struct bag *temp = NULL;

void basaEkle(int veri) 
{
    struct bag *eleman;
    eleman = (struct bag *) malloc(sizeof(struct bag));
    eleman->data = veri;
    eleman->next = start;
    start = eleman;
}

void sonaEkle(int veri) 
{
    struct bag *eleman;
    eleman = (struct bag *) malloc(sizeof(struct bag));
    eleman->data = veri;
    eleman->next = NULL;

    if (start == NULL) 
    {
        start = eleman;
    } else {
        temp = start;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = eleman;
    }
}

void yazdir() 
{
    temp = start;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() 
{
    int sayi, adet = 0, secim;

    while (adet != 6) {
        printf("\nBasa eleman eklemek icin 1\n");
        printf("Sona eleman eklemek icin 2\n");
        printf("Seciminizi yapiniz: ");
        scanf("%d", &secim);

        switch (secim) 
        {
            case 1:
                printf("\nBasa eklenecek elemansn degeri: ");
                scanf("%d", &sayi);
                basaEkle(sayi);
                yazdir();
                break;
            case 2:
                printf("\nSona eklenecek elemanin degeri: ");
                scanf("%d", &sayi);
                sonaEkle(sayi);
                yazdir();
                break;
            default:
                printf("Gecersiz secim!\n");
                break;
        }
        adet++;
    }

    return 0;
}
