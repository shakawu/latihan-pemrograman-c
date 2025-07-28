#include <stdio.h>
#include <string.h>

int main()
{
    char planet[50] = "";
    char satelit[50] = "";
    char pusat_tata_surya[50] = "";

    printf("Sebutan Untuk Seluruh Tempat Tinggal Manusia: ");
    fgets(planet, sizeof(planet), stdin);
    planet[strlen(planet) - 1] = '\0';

    printf("Benda Bulat Raksasa Yang Ada Pada Malam Hari: ");
    fgets(satelit, sizeof(satelit), stdin);
    satelit[strlen(satelit) - 1] = '\0';

    printf("Suatu Bulat Raksasa Yang Sangat Panas: ");
    fgets(pusat_tata_surya, sizeof(pusat_tata_surya), stdin);
    pusat_tata_surya[strlen(pusat_tata_surya) - 1] = '\0';

    printf("%s adalah planet tempat tinggal manusia, memiliki satelit alami yakni %s dan mengorbit %s", planet, satelit, pusat_tata_surya);

    return 0;
}