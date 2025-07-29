#include <stdio.h>

int main()
{
    float berat_dalam_kg = 0.0f;
    float berat_dalam_hg = 0.0f;
    float berat_dalam_dag = 0.0f;
    float berat_dalam_dg = 0.0f;
    float berat_dalam_g = 0.0f;
    float berat_dalam_cg = 0.0f;
    float berat_dalam_mg = 0.0f;
    char pilihan = '\0';

    printf("Konversi Berat (dari satuan kg) ke beberapa satuan seperti hg, dag, dg, g, cg, mg \n");

    printf("Ketikkan Berat yang Kamu Miliki (dalam satuan Kilogram / Kg): ");
    scanf("%f", &berat_dalam_kg);

    printf("Ingin di konversi ke?\n");
    printf("1. Hg\n");
    printf("2. Dag\n");
    printf("3. Dg\n");
    printf("4. G\n");
    printf("5. cg\n");
    printf("6. mg\n");
    printf("Ketikkan Opsi dalam Angka (1, 2, 3, 4, 5, 6): ");
    scanf(" %c", &pilihan);

    if (pilihan == '1')
    {
        berat_dalam_hg = berat_dalam_kg * 10;
        printf("%.2fHg", berat_dalam_hg);
    }
    else if (pilihan == '2')
    {
        berat_dalam_dag = berat_dalam_kg * 100;
        printf("%.2fDag", berat_dalam_dag);
    }
    else if (pilihan == '3')
    {
        berat_dalam_dg = berat_dalam_kg * 1000;
        printf("%.2fDg", berat_dalam_dg);
    }
    else if (pilihan == '4')
    {
        berat_dalam_g = berat_dalam_kg * 10000;
        printf("%.2fG", berat_dalam_g);
    }
    else if (pilihan == '5')
    {
        berat_dalam_mg = berat_dalam_kg * 100000;
        printf("%.2fMg", berat_dalam_mg);
    }
    else if (pilihan == '6')
    {
        berat_dalam_cg = berat_dalam_kg * 10000000;
        printf("%.2fCg", berat_dalam_cg);
    }
    else
    {
        printf("Opsi Yang Kamu Input Tidak Valid!");
    }

    return 0;
}