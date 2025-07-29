#include <stdio.h>

int main()
{
    float celcius = 0.0f;
    float fahrenheit = 0.0f;
    char opsi = '\0';

    printf("Konversi Suhu Sederhana\n");
    printf("1. Celcius ke Fahrenheit\n");
    printf("2. Fahrenheit ke Celcius\n");
    printf("Ketikkan Opsi Kamu (1 atau 2): ");
    scanf("%c", &opsi);

    if (opsi == '1')
    {
        printf("Ketikkan Suhu Dalam Satuan Celcius: ");
        scanf("%f", &celcius);
        fahrenheit = (celcius * 9 / 5) + 32;
        printf("Suhu pada satuan Fahrenheit: %.1fF\n", fahrenheit);
    }
    else if (opsi == '2')
    {
        printf("Ketikkan Suhu Dalam Satuan Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celcius = 5 / 9 * (fahrenheit - 32);
        printf("Suhu pada satuan Celcius: %.1fC\n", celcius);
    }

    return 0;
}