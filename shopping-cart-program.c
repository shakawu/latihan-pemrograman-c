#include <stdio.h>
#include <string.h>

int main()
{
    char barang_belanjaan[100] = "";
    int jumlah_barang = 0;
    float harga_barang = 0.0f;

    printf("Ketikkan Barang Yang Anda Beli: ");
    // scanf("%s", &barang_belanjaan);
    fgets(barang_belanjaan, sizeof(barang_belanjaan), stdin);
    barang_belanjaan[strlen(barang_belanjaan) - 1] = '\0';

    printf("Ketikkan Jumlah Barang Yang Anda Beli: ");
    scanf("%d", &jumlah_barang);

    printf("Ketikkan Harga Barang Yang Anda Beli: ");
    scanf("%f", &harga_barang);

    printf("Barang Belanjaan Anda: \n");
    printf("Barang: %s \n", barang_belanjaan);
    printf("Jumlah: %d \n", jumlah_barang);
    printf("Total Biaya: %.3f \n", harga_barang);

    return 0;
}