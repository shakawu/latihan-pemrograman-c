#include <stdio.h>
#include <math.h>

int main()
{
    double jari_jari = 0.0;
    double luas_lingkaran = 0.0;
    double luas_permukaan_bola = 0.0;
    double keliling_lingkaran = 0.0;
    double volume_bola = 0.0;
    // Menambahkan const karena nilai pi tidak berubah
    const double pi = 3.14159265358979;

    printf("Ketikkan Nilai Jari-Jari Lingkaran: ");
    scanf("%lf", &jari_jari);

    luas_lingkaran = pi * pow(jari_jari, 2);
    keliling_lingkaran = 2 * pi * jari_jari;
    luas_permukaan_bola = 4 * pi * pow(jari_jari, 2);
    volume_bola = (4 / 3) * pi * pow(jari_jari, 3);

    printf("Hasil:\n");
    printf("Luas Lingkaran: %.3lfcm^2 \n", luas_lingkaran);
    printf("Keliling Lingkaran: %.3lfcm \n", keliling_lingkaran);
    printf("Luas Permukaan Bola: %.3lfcm^2 \n", luas_permukaan_bola);
    printf("Volume Bola: %.3lfcm^3 \n", volume_bola);

    return 0;
}