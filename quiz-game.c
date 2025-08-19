#include <stdio.h>
#include <ctype.h>

int main()
{
    char pertanyaan_pertanyaan[][100] = {"1. Pusat tata surya kita adalah... ",
                                         "2. Nama galaksi yang menjadi tempat kita berada adalah... "};

    char opsi[][100] = {"A. Matahari\nB. Bulan\nC. Mars\nD. Neptunus",
                        "A. Garuda\nB. Similikiti\nC. Matahari\nD. Bimasakti"};

    char jawaban_benar[] = {'A',
                            'D'};

    char jawaban_pengguna = '\0';
    int nilai = 0;

    int jumlahPertanyaan = sizeof(pertanyaan_pertanyaan) / sizeof(pertanyaan_pertanyaan[0]);

    printf("QUIZ\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\n%s\n", pertanyaan_pertanyaan[i]);
        printf("\n%s\n", opsi[i]);
        printf("\nKetikkan Jawabanmu: ");
        scanf(" %c", &jawaban_pengguna);

        // Build-in Function pada header <ctype.h> untuk meng-uppercasekan hasil input dari user.
        jawaban_pengguna = toupper(jawaban_pengguna);

        if (jawaban_pengguna == jawaban_benar[i])
        {
            printf("\nBENAR!\n");
            nilai += 50;
        }
        else
        {
            printf("\nSALAH!\n");
        }
    }

    printf("Nilai Akhir = %d", nilai);

    return 0;
}