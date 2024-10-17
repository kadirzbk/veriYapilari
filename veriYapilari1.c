#include <stdio.h>
#include <stdlib.h>

struct dugum {
    int veri;
    struct dugum* gosterici;
};

int main() {
    struct dugum* bir = (struct dugum*) malloc(sizeof(struct dugum));
    struct dugum* iki = (struct dugum*) malloc(sizeof(struct dugum));
    struct dugum* uc = (struct dugum*) malloc(sizeof(struct dugum));
    struct dugum* dort = (struct dugum*) malloc(sizeof(struct dugum));

    bir->gosterici = iki;
    bir->veri = 11;

    iki->gosterici = uc;
    iki->veri = 22;

    uc->gosterici = dort;
    uc->veri = 33;

    dort->gosterici = NULL;
    dort->veri = 44;

    printf("%d %d %d %d\n", bir->veri, iki->veri, uc->veri, dort->veri);

    return 0;
}
