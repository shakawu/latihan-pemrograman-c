#include <stdio.h>

int main()
{
    double angka1 = 0.0;
    double angka2 = 0.0;
    char operasi = '\0';
    double result = 0.0;

    printf("Ketikkan Angka Pertama: ");
    scanf("%lf", &angka1);

    printf("Ketikkan Operasi Matematika (+, -, /, *): ");
    scanf(" %c", &operasi);

    printf("Ketikkan Angka Kedua: ");
    scanf("%lf", &angka2);

    switch (operasi)
    {
    case '+':
        result = angka1 + angka2;
        printf("Hasil: %.2lf", result);
        break;
    case '-':
        result = angka1 - angka2;
        printf("Hasil: %.2lf", result);
        break;
    case '*':
        result = angka1 * angka2;
        printf("Hasil: %.2lf", result);
        break;
    case '/':
        result = angka1 / angka2;
        printf("Hasil: %.2lf", result);
        break;
    default:
        printf("Opsi Tidak Valid (+, -, /, *)!");
        break;
    };

    return 0;
}