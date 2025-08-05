#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    srand(time(NULL));

    int maxValue = 10;
    int minValue = 1;
    int percobaan = 0;
    int randomNumbers = (rand() % (maxValue - minValue + 1)) + minValue;
    int userInput = 0;

    // Versi Gweh
    // while (true)
    // {
    //     printf("Ketikkan Angka 1-10: ");
    //     scanf("%d", &userInput);

    //     if (userInput == randomNumbers)
    //     {
    //         printf("TEBAKAN ANDA BENAR!\n");
    //         printf("Anda Berhasil Dalam %d Percobaan!", percobaan);
    //         break;
    //     }
    //     else if (userInput < 1 || userInput > 10)
    //     {
    //         printf("HANYA KETIKKAN ANGKA DARI 1 - 10!\n");
    //     }
    //     else if (userInput > randomNumbers)
    //     {
    //         printf("TEBAKAN ANDA TERLALU TINGGI!\n");
    //         percobaan++;
    //     }
    //     else if (userInput < randomNumbers)
    //     {
    //         printf("TEBAKAN ANDA TERLALU RENDAH!\n");
    //         percobaan++;
    //     }
    //     else
    //     {
    //         printf("TEBAKAN ANDA SALAH!\n");
    //         printf("SILAHKAN COBA LAGI!\n");
    //         percobaan++;
    //     }
    // }

    do
    {
        printf("--- PERMAINAN TEBAK ANGKA ---\n");
        printf("Ketikkan Angka 1-10: ");
        scanf("%d", &userInput);
        percobaan++;

        if (userInput > randomNumbers)
        {
            printf("TEBAKAN ANDA TERLALU TINGGI\n");
        }
        else if (userInput < randomNumbers)
        {
            printf("TEBAKAN ANDA TERLALU RENDAH\n");
        }
        else
        {
            printf("TEBAKAN ANDA BENAR!\n");
        }

    } while (userInput != randomNumbers);

    printf("Jawabannya adalah %d\n", randomNumbers);
    printf("Anda Menjawab Benar Pada Percobaan Ke-%d!", percobaan);

    return 0;
}