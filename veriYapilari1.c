#include <stdio.h>
#include <stdlib.h>

struct bag {
    int deger;
    struct bag* gosterici;
};

int main() {
    struct bag* bir = (struct bag*) malloc(sizeof(struct bag));
    struct bag* iki = (struct bag*) malloc(sizeof(struct bag));
    struct bag* uc = (struct bag*) malloc(sizeof(struct bag));
    struct bag* dort = (struct bag*) malloc(sizeof(struct bag));

    bir->gosterici = iki;
    bir->deger = 11;

    iki->gosterici = uc;
    iki->deger = 22;

    uc->gosterici = dort;
    uc->deger = 33;

    dort->gosterici = NULL;
    dort->deger = 44;

    printf("%d %d %d %d\n", bir->deger, iki->deger, uc->deger, dort->deger);

    return 0;
}
