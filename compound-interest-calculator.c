#include <stdio.h>
#include <math.h>

int main()
{
    float modal_awal = 0.0;
    float presentase_bunga = 0.0f;
    float periode = 0.0f;
    float modal_akhir = 0.0f;

    printf("Ketikkan Modal Awal: ");
    scanf("%f", &modal_awal);

    printf("Ketikkan Presentase Bunga: ");
    scanf("%f", &presentase_bunga);

    printf("Ketikkan Periode Waktu yang Ingin Dihitung (Tahun): ");
    scanf("%f", &periode);

    modal_akhir = modal_awal * pow((1 + (presentase_bunga / 100)), periode);

    printf("Modal akhir dalam %.0f tahun, adalah Rp.%.3f", periode, modal_akhir);

    return 0;
}